#include "complex.h"
#include <cmath>

complex::complex()
    :real(0)
    , imaginary(0)
{}

complex::complex(double re, double im)
    :real(re)
    ,imaginary(im)
{}

void complex::add (const complex& other)
{


    real += other.real;
    imaginary += other.imaginary;
}

void complex::sub (const complex& other)
{
    real -= other.real;
    imaginary -= other.imaginary;
}

std::ostream& complex::print(std::ostream& out)
{
    out << "(" << real << ", " << imaginary << ")" << std::endl;
    return out;
}

void complex::multiplication(const int num)
{
    real *= num;
    imaginary *= num;
}

void complex::division(const int num)
{
    real /= num;
    imaginary /= num;
}

