#include <iostream>
#include <future>
#include <array>
#include "sort_select.hxx"

int main() {

    std::array<int, 5> arr{5, 3, 6, 2, 1};
    
    SortSelect(arr);

    for (const auto& el : arr) {
        std::cout << el << " ";
    }
    
}