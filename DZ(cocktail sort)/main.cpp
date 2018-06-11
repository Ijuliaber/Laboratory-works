#include <iostream>
#include <vector>



template <class It, class Cmp>
void cockteil_sort (It first, It end, Cmp cmp)
{
    if (first!=end)
    {
        for(auto it_first = first, it_end = end -1; it_first!=it_end;)
        {
            for(auto it = it_first; it != it_end; ++it)
            {
                if ( cmp(*(it+1), *it ) )
                    std::swap( *(it+1), *it );
            }
            --it_end;
            if(it_first == it_end)
                return;

            for( auto it = it_end; it != it_first; --it)
            {
                if ( cmp(*it, *(it-1)) )
                    std::swap(*(it-1), *it);
            }
            ++it_first;
        }
    }
};


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
    std::vector<int> b = {10, 7, 11, 9, 5};
    for(auto it = a.begin(); it<a.end(); ++it)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";

    shaker_sort<int>(a, a.size());
    for(auto it = a.begin(); it<a.end(); ++it)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";


    for(auto it = b.begin(); it<b.end(); ++it)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";
    cockteil_sort(b.begin(), b.end(), std::less<int>() );
    for(auto it = b.begin(); it<b.end(); ++it)
    {
        std::cout<<*it<<" ";
    }

    return 0;
}