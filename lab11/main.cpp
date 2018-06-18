#include "binary_tree.hpp"
#include <iostream>

int main()
{
    {
        binary_tree<int> tree;

        try
        {

            tree.insert(10);
            tree.insert(20);
            tree.insert(1);
            tree.insert(2);
            tree.insert(15);
            tree.insert(21);
            tree.insert(11);
            tree.insert(14);
            tree.insert(12);

            tree.insert(-10);
            //tree.insert(10);

            tree.erase(7);
        }
        catch (const std::exception & e)
        {
            std::cout << e.what()<<std::endl;
        }

        std::cout << tree <<std::endl;
        tree.erase(21);
        tree.erase(10);

        std::cout << tree <<std::endl;


        try
        {

            binary_tree<int>::TNode * found = tree.find(2);
            if (found)
                std::cout << found->Data<<std::endl;

            found = tree.find(7);

        }
        catch (const std::exception & e)
        {
            std::cout << e.what()<<std::endl;
        }
    }
    return 0;
}