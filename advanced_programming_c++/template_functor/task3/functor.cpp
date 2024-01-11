#include "functor.hpp"
#include <vector>
#include <functional>

Functor::Functor() {

}

void Functor::operator()(std::vector<int> vec) {

    std::for_each(vec.begin(), vec.end(), [&](int x){if (x % 3 == 0) {count_++; sum_ += x;}});

}

int Functor::GetSum() {
    return sum_;
}

int Functor::GetCount() {
    return count_;
}