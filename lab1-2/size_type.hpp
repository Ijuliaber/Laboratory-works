#include <iostream>

template <class T>
class size_type
{
    size_t size;

public:
    size_type()
            : size(sizeof(T))
    {}

    ~size_type() = default;

    friend std::ostream & operator<<(std::ostream &out, const size_type & type)
    {
        out << "sizeof type = "<< type.size<<std::endl;
        return out;
    }
};