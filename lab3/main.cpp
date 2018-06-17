#include <iostream>
#include "matrix.hpp"

int main() {
    matrix a(3, 2, 2);
    matrix b(2, 3, 3);
    matrix c(2,2);
    c = a * b;
    a.print(std::cout);
    b.print();
    c.print();

    matrix f;
    f.matrix_from_file("/Users\julib\Desktop/juliber_project/lab3/test.txt");
    f.print();

/*
    std::ifstream file("/Users\julib\Desktop/juliber_project/lab3/test.txt");
    file.open("test.txt");
    if(file.is_open())
    {
        std::cout<<"Файл открыт";
    } else
    {
        std::cout<<"Файл не открыт";
    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        */
}
