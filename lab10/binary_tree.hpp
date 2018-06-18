#include <exception>
#include <iostream>
#include <fstream>
#include <vector>

template <class T>
class binary_tree
{
public:
    using value_type = T;

    struct TNode
    {
        value_type Data;
        TNode * Right;
        TNode * Left;

    private:
        TNode(const value_type& data, TNode * next = nullptr, TNode * prev = nullptr)
                : Data(data)
                , Right(next)
                , Left(prev)
        { }
        TNode()
                : Data(value_type())
                , Right(nullptr)
                , Left(nullptr)
        {}

        ~TNode() = default;

        friend class binary_tree;
    };

private:
    TNode * Root;

    static void print_tree(std::ostream & out, binary_tree::TNode * node, size_t level = 0)
    {
        if (node)
        {
            ++level;
            print_tree(out, node->Right, level);
            for (size_t i = 1; i < level; ++i)
            {
                out<<"-";
            }
            out << "(" << node->Data << ")" <<std::endl;
            print_tree(out, node->Left, level);

        }
    }

    void erase_all_tree(TNode * node)
    {
        if (node)
        {
            erase_all_tree(node->Left);
            erase_all_tree(node->Right);
            node->Left = nullptr;
            node->Right = nullptr;
            delete node;
        }
    }

public:
    binary_tree()
            : Root(nullptr)
    {}

    binary_tree(std::initializer_list<value_type>  elem)
            : binary_tree()
    {
        for (value_type e : elem)
        {
            this->insert(e);
        }
    }

    ~binary_tree()
    {
        erase_all_tree(Root);
    }

    void insert(const value_type& data)
    {
        if (!try_insert(data))
            throw std::invalid_argument("Error! Element already exist");
    }

    bool try_insert(const value_type& data)
    {
        if (Root == nullptr)
        {
            Root = new TNode(data);
            return true;
        }

        TNode * curNode = Root;
        TNode * prevNode = curNode;
        while (curNode)
        {

            if (curNode->Data == data)
                return false;
            prevNode = curNode;
            if (curNode->Data < data)
                curNode = curNode->Right;
            else
                curNode = curNode->Left;
        }

        TNode * newNode = new TNode(data);
        (prevNode->Data < data) ? prevNode->Right = newNode : prevNode->Left = newNode;
        return true;
    }

    TNode * find(const value_type & data)
    {
        if (Root == nullptr)
            throw std::logic_error("Error! Binary tree not exist");
        TNode* curNode = Root;
        while (curNode)
        {
            if (curNode->Data == data)
            {
                return curNode;
            }
            else if (curNode->Data < data)
                curNode = curNode->Right;
            else
                curNode = curNode->Left;
        }
        throw std::invalid_argument("Error! Element does not exist in the tree");
    }


    void tree_from_file(const std::string & name_file)
    {
        std::ifstream file(name_file);
        if(!file.is_open())
            throw std::runtime_error("Error! File does not open!");
        std::string line;
        std::vector<std::string> number;
        std::getline(file, line);
        number = split(line);

        file.seekg(0);

        for (size_t i = 0; i < number.size(); ++i)
        {
            value_type data;
            file >> data;
            this->insert(data);
        }

        file.close();
    }

    void print_to_file(const std::string & name_file)
    {
        std::ofstream file(name_file);
        if(!file.is_open())
            throw std::runtime_error("Error! File does not open!");
        print_tree(file, this->Root);
        file.close();
    }

    friend std::ostream& operator << (std::ostream & out, const binary_tree& tree)
    {
        binary_tree::print_tree(out, tree.Root);
        return out;
    }

private:
    std::vector<std::string> split(const std::string & line)
    {
        std::vector<std::string> parsedLine;
        std::string word;
        for(size_t i = 0; i < line.size(); ++i) {
            if(line[i] == ' ')
            {
                if (!word.empty())
                {
                    parsedLine.push_back(word);
                    word.clear();
                }
            } else {
                word += line[i];
            }
        }

        if(!word.empty())
            parsedLine.push_back(word);
        return parsedLine;
    }
};