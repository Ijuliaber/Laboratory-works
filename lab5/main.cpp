#include <iostream>
#include "matrix.hpp"

int main() {
    matrix a(3, 2, 5);
    std::cout<<a;
    matrix b;
    std::cin>>b;
    std::cout<<b;
}