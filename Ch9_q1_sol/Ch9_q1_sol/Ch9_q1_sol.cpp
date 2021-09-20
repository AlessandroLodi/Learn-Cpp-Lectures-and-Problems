

#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>


enum ITEMS
{
    items_health_point,
    items_torches,
    items_arrows,
    items_max_total
};

using type_items = std::array<int, ITEMS::items_max_total>;

int countItems(const type_items &arr)
{
    return std::accumulate(arr.begin(), arr.end(), 0);
    // return std::reduce(arr.begin(), arr.end());
}


int main()
{
    type_items arr{ 5, 10, 15 };

    std::cout << countItems(arr) << '\n';
    std::cout << "Number of arrows: " << arr[ITEMS::items_arrows] << '\n';
    return 0;
}

