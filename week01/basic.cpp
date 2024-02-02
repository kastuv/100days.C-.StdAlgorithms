#include <iostream>
#include <vector>
#include <ranges>

int main()
{
    int count =0, sum =0;
    std::vector<int> data = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //used the vector for an example

    std::ranges::for_each(data, [&](int el)
    {
        count++;
        sum += el;
        std::cout<<sum;
    });
}