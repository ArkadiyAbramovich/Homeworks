#include <iostream>
#include <future>
#include <array>
#include "sort_select.hxx"

int main() {

    std::array<int, 5> arr{5, 3, 6, 2, 1};

    std::promise<std::array<int, 5>> prom;
    std::future<std::array<int, 5>> ft_res = prom.get_future();
    auto ft = std::async(SortSelect, arr, std::move(prom));

    auto arr_ =  ft_res.get();

    for (const auto& el : arr) {
        std::cout << el << " ";
    }
    
}