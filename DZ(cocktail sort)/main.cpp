#include <iostream>
#include <vector>

template <class T>
void shaker_sort(std::vector<T>& arr, std::size_t size)
{
    for(std::size_t left_index = 0, right_index = size - 1; left_index < right_index;)
    {
        for (std::size_t index = left_index; index < right_index; ++index)
        {
            if(arr[index] >= arr[index + 1])
            {
                std::swap(arr[index], arr[index + 1]);
            }
        }
        --right_index;

        for (std::size_t index = right_index; index > left_index; --index)
        {
            if (arr[index] < arr[index - 1])
            {
                std::swap(arr[index], arr[index - 1]);
            }
        }
        ++left_index;
    }
}


int main() {
    std::vector<int> a = {10, 7, 9, 11, 5};
    for(size_t i = 0; i < a.size(); ++i)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";

    shaker_sort<int>(a, a.size());
    for(size_t i = 0; i < a.size(); ++i)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";

    return 0;
}
