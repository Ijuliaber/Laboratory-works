#include <iostream>
#include <vector>

template <class T>
void insertion_sort(std::vector<T> & mas)
{
    for (size_t i = 1; i < mas.size(); ++i)
    {
        for(size_t j = i; j > 0 && mas[j] < mas[j-1]; --j)
        {
            std::swap(mas[j], mas[j-1]);
        }
    }
}


int main() {
    std::vector<int> mas={9, 2, 4, 6, 7, 4};
    for(size_t i = 0; i < mas.size(); ++i)
    {
        std::cout<<mas[i]<<" ";
    }
    insertion_sort(mas);
    std::cout<<std::endl;
    for(size_t i = 0; i < mas.size(); ++i)
    {
        std::cout<<mas[i]<<" ";
    }
    return 0;
}