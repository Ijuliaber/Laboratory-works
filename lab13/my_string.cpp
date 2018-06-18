#include "my_string.hpp"

void my_string::newData(const char * const data, const size_t len)
{
    Length = len;
    Data = new char[Length + 1];
    for (int i = 0; i < Length; i++) Data[i] = data[i];
    Data[Length] = '\0';
}

void my_string::addNewData(const char * const data, const size_t len)
{
    char * newData = new char[Length + len + 1];
    for (int i = 0; i < Length; i++) newData[i] = Data[i];
    for (int i = 0; i < len; i++) newData[Length + i] = data[i];
    newData[Length + len] = '\0';
    delete[] Data;
    Length += len;
    Data = newData;
}

my_string::~my_string()
{
    delete[] Data;
}

my_string::my_string()
{
    newData(nullptr, 0);
}

my_string::my_string(const my_string& rhs)
{
    newData(rhs.Data, rhs.Length);
}

my_string::my_string(const char * const data)
{
    size_t len = 0;
    while (data[len] != '\0') len++;
    newData(data, len);
}

my_string::my_string(const char * const data, const size_t len)
{
    newData(data, len);
}

my_string& my_string::operator =(const my_string& rhs)
{
    if (rhs == *this) return *this;
    delete[] Data;
    newData(rhs.Data, rhs.Length);
    return *this;
}

my_string& my_string::operator =(const char * const data)
{
    delete[] Data;
    size_t len = 0;
    while (data[len] != '\0') len++;
    newData(data, len);
    return *this;
}

my_string& my_string::operator +=(const my_string& rhs)
{
    addNewData(rhs.Data, rhs.Length);
    return *this;
}

my_string& my_string::operator +=(const char * const data)
{
    size_t len = 0;
    while (data[len] != '\0') len++;
    addNewData(data, len);
    return *this;
}

bool my_string::operator ==(const my_string& rhs) const
{
    if (Length != rhs.Length) return false;
    for (int i = 0; i < Length; i++)
        if (Data[i] != rhs.Data[i]) return false;
    return true;
}

bool my_string::operator ==(const char * const data) const
{
    size_t len = 0;
    while (data[len] != '\0') len++;
    if (Length != len) return false;
    for (int i = 0; i < Length; i++)
        if (Data[i] != data[i]) return false;
    return true;
}

bool my_string::operator <(const my_string& rhs) const
{
    for (int i = 0; i < Length + 1 && i < rhs.Length + 1; i++) {
        if (Data[i] < rhs.Data[i])
            return true;
        else if (Data[i] > rhs.Data[i])
            return false;
    }
    return false;
}

size_t my_string::Find(const my_string& substr) const
{
    for (int i = 0; i < Length; i++) {
        for (int k = 0; k < substr.Length; k++) {
            if (Data[i + k] != substr.Data[k])
                break;
            if (k == substr.Length - 1)
                return i;
        }
    }
    return -1;
}

void my_string::Replace(char oldSymbol, char newSymbol)
{
    for (int i = 0; i < Length; i++)
        if (Data[i] == oldSymbol) Data[i] = newSymbol;
}

size_t my_string::Size() const
{
    return Length;
}

char my_string::operator[](size_t index) const
{
    return Data[index];
}

char& my_string::operator[](size_t index)
{
    return Data[index];
}

bool my_string::Empty() const
{
    return (Length == 0);
}

my_string operator+(const my_string & a, const my_string & b)
{
    my_string result(a);
    result += b;
    return result;
}

bool operator!=(const my_string & a, const my_string & b)
{
    return !(a == b);
}

bool operator>(const my_string & a, const my_string & b)
{
    return (!(a == b) && !(a < b));
}

std::ostream & operator<<(std::ostream &out, const my_string &str)
{
    out << str.Data;
    return out;
}
