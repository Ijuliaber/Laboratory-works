#include <iostream>
#include "size_type.hpp"

int main()
{
    /*
    std::cout << "sizeof(bool) = " << sizeof(bool) << std::endl;
    std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
    std::cout << "sizeof(short) = " << sizeof(short) << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
    std::cout << "sizeof(float) = " << sizeof(float) << std::endl;
    std::cout << "sizeof(double) = " << sizeof(double) << std::endl;
    std::cout << "sizeof(long) = " << sizeof(long) << std::endl;
     */

    size_type<int> a;
    std::cout<<a;

    size_type<bool> b;
    std::cout<<b;
    return 0;
}