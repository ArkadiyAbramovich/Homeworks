#include <iostream>
#include <vector>
#include "for_each.hxx"

int main() {

    std::vector<int> vec{34, 56, 12, 78, 12, 99, 23, 94};

    for_each_parl(vec.begin(), vec.end(), [](int x){std::cout << x << " ";});
}