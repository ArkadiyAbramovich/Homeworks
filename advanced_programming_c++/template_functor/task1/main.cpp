#include "sqrt_template.hpp"
#include <iostream>
#include <vector>

int main(int argc, char** argv) {

    std::cout << sqrt(4) << std::endl;

    std::vector<int> vec{-1, 4, 8};

    sqrt(vec);

    return 0;
}