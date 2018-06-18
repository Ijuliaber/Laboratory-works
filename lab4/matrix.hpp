#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class matrix
{
public:
    using value_type = int;
    using size_type = std::size_t;
    using matrix_type = std::vector<value_type>;

private:
    size_type rows_count;
    size_type cols_count;
    matrix_type matrix_data;

public:
    matrix()
            : rows_count(0)
            , cols_count(0)
            , matrix_data(0)
    {}

    matrix(size_type rows, size_type cols, value_type default_value = 0)
            : rows_count(rows)
            , cols_count(cols)
            , matrix_data(rows_count * cols_count, default_value)
    {}

    matrix(size_type rows, size_type cols, std::vector<value_type> & data)
            : rows_count(rows)
            , cols_count(cols)
            , matrix_data(data)
    {}

    ~matrix() = default;

    matrix& operator=( const matrix& other )
    {
        if ( this != &other )
        {
            rows_count = other.rows_count;
            cols_count = other.cols_count;
            matrix_data = other.matrix_data;
        }
        return *this;
    }

    matrix operator+=(const matrix& other)
    {
        for(size_type i=0; i < rows_count * cols_count; ++i)
        {
            this->matrix_data[i] += other.matrix_data[i];
        }
        return *this;
    }

    const value_type& operator()( size_type row, size_type col ) const
    {
        return matrix_data[ cols_count * row + col ];
    }

    value_type& operator()( size_type row, size_type col )
    {
        return matrix_data[ cols_count * row + col ];
    }

    std::ostream& print(std::ostream& out = std::cout)
    {
        for (size_type i = 0; i < rows_count; ++i)
        {
            for (size_type j = 0; j < cols_count; ++j)
            {
                out << (*this)(i, j) << " ";
            }
            out << "\n";
        }
        return out;
    }

    void matrix_from_file (const std::string & name_file)
    {
        std::ifstream file(name_file);

        if(!file.is_open())
        {
            std::cout<<"Файл не открыт"<<std::endl;
            return;
        }

        std::string line;
        std::vector<std::string> number;
        bool cols = false;

        while (std::getline(file, line))
        {
            if (!line.empty()) {
                number = split(line);

                if (!cols)
                {
                    cols_count = number.size();
                    cols = true;
                }

                if (cols_count != number.size())
                {
                    std::cout<<"Ошибка в записи матрицы! Количество элементов в строках разное!"<<std::endl;
                    return;
                }


                for (size_type i = 0; i < number.size(); ++i) {
                    matrix_data.push_back(atoi(number[i].c_str()));
                }
                ++rows_count;
            }
        }
        file.close();
    }

    bool operator==(const matrix & other )
    {
        return rows_count == other.rows_count && cols_count == other.cols_count && matrix_data == other.matrix_data;
    }

    friend matrix operator+(const matrix& a, const matrix& b)
    {
        matrix result = a;
        result += b;
        return result;
    }

    friend matrix operator*( const matrix& a, const matrix& b )
    {
        size_type magic_number = a.cols_count;
        matrix result(a.rows_count, b.cols_count);
        for (size_type r = 0; r < result.rows_count; ++r) {
            for (size_type c = 0; c < result.cols_count; ++c) {
                value_type val(0);
                for (size_type i = 0; i < magic_number; ++i) {
                    val += a(r, i) * b(i, c);
                }
                result(r, c) = val;
            }
        }
        return result;
    }

private:
    std::vector<std::string> split(const std::string & line)
    {
        std::vector<std::string> parsedLine;
        std::string word;

        for(size_type i = 0; i < line.size(); ++i) {
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