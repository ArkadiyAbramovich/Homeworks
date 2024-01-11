#pragma once
#include <vector>
#include <iostream>
#include <functional>


template <typename T>
T sqrt(T x) {
    return (x * x);
}

template <typename T>
void sqrt(const std::vector<T>& vec) {

    std::for_each(vec.begin(), vec.end(), [&](T x) { std::cout << x * x << ", ";});
    std::cout << std::endl;

}