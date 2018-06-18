#include <iostream>
#include <exception>
#include "matrix.hpp"

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

void test_prisvaivanie()
{
    matrix a(3, 3, 1);
    matrix b(5, 5, 2);
    a = b;
    assert(a == b);
}


void test_plus_ravno()
{
    matrix a(3, 3, 1);
    matrix b(3, 3, 2);
    matrix c(3, 3, 3);
    a += b;
    assert(a == c);
}

void test_plus()
{
    matrix a(3, 3, 1);
    matrix b(3, 3, 2);
    matrix c(3, 3, 3);
    assert(a + b == c);
}

void test_umnogenie()
{
    matrix a(2, 3, 2);
    matrix b(3, 2, 3);
    matrix c(2, 2, 18);
    assert( a*b == c);
}

void test_dostup()
{
    std::vector<int> elem = {1, 2, 3, 4, 5, 6};
    matrix a(2, 3, elem);
    std::cout<<a(1, 2);
    assert( a(0, 1) == 2 );
    assert( a(1, 1) == 5 );
}

void test_matrix_from_file()
{
    matrix a;
    a.matrix_from_file("C:\Users\julib\Desktop\juliber_project\lab3\test.txt");
    std::vector<int> elem = {1, 2, 3, 4, 5, 6};
    matrix b(2, 3, elem);
    assert(a == b);

}

int main()
{
    RUN_TEST(test_prisvaivanie, "successed");
    RUN_TEST(test_plus_ravno, "successed");
    RUN_TEST(test_plus, "successed");
    RUN_TEST(test_umnogenie, "successed");
    RUN_TEST(test_dostup, "successed");
    RUN_TEST(test_matrix_from_file, "successed");

    return 0;
}
