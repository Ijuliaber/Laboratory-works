#include <iostream>

class complex
{
    double real;
    double imaginary;

public:
    complex();
    complex(double re, double im);

    void add (const complex & other);
    void sub (const complex & other);
    std::ostream& print(std::ostream& out);
    void multiplication(const int num);
    void division(const int num);
};