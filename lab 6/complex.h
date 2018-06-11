#include <iostream>

class complex
{
    double real;
    double imaginary;

public:
    complex();
    complex(double re, double im);
    complex(const complex& other);

    void add (const complex & other);
    void sub (const complex & other);
    std::ostream& print(std::ostream& out);
    void multiplication(const int num);
    void division(const int num);

    complex& operator=(const complex& other);
    bool operator==(const complex& other);
    complex& operator+=(const complex& other);
    complex& operator-=(const complex& other);
    complex& operator*=(const complex& other);
    complex& operator/=(const complex& other);

    friend std::basic_ostream<char>& operator<<(std::basic_ostream<char>& out, const complex& comp);
    friend std::basic_istream<char>& operator>>(std::basic_istream<char>& in, complex& comp);
};

complex operator+(const complex& a, const complex& b);
complex operator-(const complex& a, const complex& b);
complex operator*(const complex& a, const complex& b);
complex operator/(const complex& a, const complex& b);