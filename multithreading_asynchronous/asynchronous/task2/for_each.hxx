#pragma once
#include <future>

template<typename It, typename Func>
void for_each_parl(It begin, It end, Func func) {
    auto size = std::distance(begin, end);
    auto middle = begin;
    std::advance(middle, size / 2);
    if (middle == begin + 1) {
        return;
    }
    auto ft_res_1 = std::async(for_each_parl<It, Func>, begin, middle, func);
    auto ft_res_2 = std::async(for_each_parl<It, Func>, middle, end, func);
}