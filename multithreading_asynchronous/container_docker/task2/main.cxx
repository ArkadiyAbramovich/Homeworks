#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

int main(int argc, char** argv) {

    std::vector<int> vec{4,7,9,14,12};

    std::cout << "Data In: ";
    std::for_each(vec.begin(), vec.end(), [](int x) {std::cout << x << " ";});
   
    std::cout << std::endl;

    std::cout << "Data Out: ";
    std::for_each(vec.begin(), vec.end(), [](int x) {if (x%2 != 0) {x *= 3; std::cout << x << " ";}else {std::cout << x << " ";}});
}