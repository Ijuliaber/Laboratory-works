#include <iostream>
#include <exception>
#include "complex.h"

#define assert(X) { \
	if(!(X)) {\
		std::cout << "see function:'" << __FUNCTION__ << "' line: " << __LINE__ << std::endl;\
		throw std::logic_error(#X); \
	}\
}

#define RUN_TEST(func, message) \
{ try { \
    std::cout << "run " << #func << std::endl; \
    func(); \
    std::cout << #func << " " << message << std::endl; \
  } \
  catch (std::exception& e) {\
          std::cout << #func << " failed. reason: condition '" << e.what() << "' is false" << std::endl; \
  }\
  std::cout << "__________________________________" << std::endl << std::endl; \
}

void test_add()
{
    complex a(1, 1);
    complex b(2, 3);
    complex c(3, 4);
    a.add(b);
    assert(a == c);
}

void test_sub()
{
    complex a(3, 4);
    complex b(1, 1);
    complex c(2, 3);
    a.sub(b);
    assert(a == c);
}

void test_multiplication()
{
    complex a(2, 3);
    complex c(4, 6);
    a.multiplication(2);
    assert(a == c);
}

void test_division()
{
    complex a(10, 20);
    complex c(2, 4);
    a.division(5);
    assert(a == c);
}

void test_prisvaivanie()
{
    complex a(1, 2);
    complex c (3, 5);
    a = c;
    assert(a == c);
}

void test_plus_ravno()
{
    complex a(2, 3);
    complex b(3, 7);
    complex c(5, 10);
    a += b;
    assert(a == c);
}

void test_minus_ravno()
{
    complex a(5, 6);
    complex b(1, 7);
    complex c(4, -1);
    a -= b;
    assert(a == c);
}

void test_delit_ravno()
{
    complex a(10, 8);
    complex b(6, 8);
    complex c(1.24, -0.32);
    a /= b;
    assert(a == c);
}

void test_umnogenie_ravno()
{
    complex a(2, 4);
    complex b(6, 8);
    complex c(-20, 40);
    a *= b;
    assert(a == c);
}

void test_plus()
{
    complex a(2, 3);
    complex b(-4, 7);
    complex c(-2, 10);
    assert(a + b == c);
}

void test_minus()
{
    complex a(5, 6);
    complex b(10, 7);
    complex c(-5, -1);
    assert(a - b == c);
}

void test_delit()
{
    complex a(2, 4);
    complex b(3, 4);
    complex c(0.88, 0.16);
    assert(a / b == c);
}

void test_umnogenie()
{
    complex a(1, 3);
    complex b(5, 5);
    complex c(-10, 20);
    assert(a * b == c);
}

int main()
{
    RUN_TEST(test_add, "successed");
    RUN_TEST(test_sub, "successed");
    RUN_TEST(test_multiplication, "successed");
    RUN_TEST(test_division, "successed");
    RUN_TEST(test_prisvaivanie, "successed");
    RUN_TEST(test_plus_ravno, "successed");
    RUN_TEST(test_minus_ravno, "successed");
    RUN_TEST(test_delit_ravno, "successed");
    RUN_TEST(test_umnogenie_ravno, "successed");
    RUN_TEST(test_plus, "successed");
    RUN_TEST(test_minus, "successed");
    RUN_TEST(test_delit, "successed");
    RUN_TEST(test_umnogenie, "successed");

    return 0;
}