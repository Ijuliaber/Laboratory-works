#include <iostream>
#include "complex.h"

int main() {
    complex a(1, 1);
    complex b(2, 2);
    complex c;
    complex d;
    c.print(std::cout);
    c.add(b);
    c.print(std::cout);
    c.sub(a);
    c.print(std::cout);
    c.multiplication(10);
    c.print(std::cout);
    c.division(4);
    c.print(std::cout);
}