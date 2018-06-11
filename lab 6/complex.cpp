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

complex::complex(const complex &other)
        :real(other.real)
        ,imaginary(other.imaginary)
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

complex& complex::operator+=(const complex &other)
{
    real += other.real;
    imaginary += other.imaginary;
    return *this;
}

complex& complex::operator-=(const complex &other)
{
    real -= other.real;
    imaginary -= other.imaginary;
    return *this;
}

complex& complex::operator*=(const complex &other)
{
    real = (real * other.real) - (imaginary * other.imaginary);
    imaginary = (real * other.imaginary) + (imaginary * other.real);
    return *this;
}

complex& complex::operator/=(const complex &other)
{
    double del = ( pow(other.real, 2) + pow(other.imaginary, 2) );
    real = ( real * other.real + imaginary * other.imaginary ) / del;
    imaginary = (other.real * imaginary - real * other.imaginary) / del;
    return *this;
}

complex& complex::operator=(const complex &other)
{
    if(this == &other)
        return *this;
    real = other.real;
    imaginary = other.imaginary;
    return *this;
}

bool complex::operator==(const complex &other)
{
    if (real == other.real && imaginary == other.imaginary)
        return true;
    else
        return false;
}

complex operator+(const complex& a, const complex& b)
{
    complex res(a);
    res += b;
    return res;
}

complex operator-(const complex& a, const complex& b)
{
    complex res(a);
    res -= b;
    return res;
}

complex operator*(const complex& a, const complex& b)
{
    complex res(a);
    res *= b;
    return res;
}

complex operator/(const complex& a, const complex& b)
{
    complex res(a);
    res /= b;
    return res;
}

std::basic_ostream<char>& operator<<(std::basic_ostream<char>& out, const complex& comp)
{
    out << "(" << comp.real << ", " << comp.imaginary << ")" << std::endl;
    return out;
}

std::basic_istream<char>& operator>>(std::basic_istream<char>& in, complex& comp)
{
    in >> comp.real;
    in >> comp.imaginary;
    return in;
}