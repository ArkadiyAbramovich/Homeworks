#pragma once
#include <future>
#include <algorithm>

template<typename It, typename Func>
void for_each_parl(It begin, It end, Func func) {
    auto size = std::distance(begin, end);
    It middle = begin;
    std::advance(middle, size / 2);
    if (middle == begin + 1) {
        return;
    }
    if (size > 10) {
    auto ft_res_1 = std::async(for_each_parl<It, Func>, begin, middle, func);
    for_each_parl<It, Func>(middle, end, func);
    } else {
        std::for_each(begin, end, [](int x){std::cout << x << " ";});
    }
}