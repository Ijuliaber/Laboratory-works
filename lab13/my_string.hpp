#include <iostream>

class my_string
{
private:
    size_t Length;
    char * Data;

public:
    // Деструктор
    ~my_string();

    // Конструктор по умолчанию
    my_string();

    // Конструктор копирования
    my_string(const my_string& rhs);

    // Конструктор, принимающий char *
    my_string(const char * const data);

    // Конструктор, который создает строку длины numberOfElements
    my_string(const char * const data, const size_t numberOfElements);

    // Оператор присваивания my_string
    my_string& operator =(const my_string& rhs);

    // Оператор присваивания char *
    my_string& operator =(const char * const data);

    // Оператор += с my_string
    my_string& operator +=(const my_string& rhs);

    // Оператор += с char *
    my_string& operator +=(const char * const rhs);

    // Оператор == с my_string
    bool operator ==(const my_string& rhs) const;

    // Оператор == с char *
    bool operator ==(const char * const rhs) const;

    // Оператор <
    bool operator <(const my_string& rhs) const;

    // Функция поиска подстроки
    size_t Find(const my_string& substr) const;

    // Функция замены букв
    void Replace(char oldSymbol, char newSymbol);

    // Функция возвращает длину строки
    size_t Size() const;

    // Оператор []
    char operator[](size_t index) const;

    // Оператор []
    char& operator[](size_t index);

    // Функция для определения пуста ли строка
    bool Empty() const;

    friend std::ostream & operator<<(std::ostream &, const my_string &);

private:
    // Функция заполнения массива Data
    void newData(const char * const data, const size_t len);

    // Функция добавления данных
    void addNewData(const char * const data, const size_t len);
};

// Оператор +
my_string operator+(const my_string & a, const my_string & b);


// <Оператор !=
bool operator!=(const my_string & a, const my_string & b);


// Оператор >
bool operator>(const my_string & a, const my_string & b);

// Оператор вывода
std::ostream & operator<<(std::ostream &out, const my_string &str);