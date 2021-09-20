
#include <iostream>
#include <algorithm>
#include <array>
#include <random>

enum ITEMS
{
    health,
    torches,
    arrow,
    max_number_items
};


int countItems(std::array<int, ITEMS::max_number_items>& arr)
{
    int sum{};
    for (int i{}; i < ITEMS::max_number_items; ++i)
    {
        sum += arr[i];
    }

    return sum;
}



int main()
{
    std::array<int, ITEMS::max_number_items> arr{2, 5, 10};

    std::cout << countItems(arr) << '\n';
    return 0;
}

