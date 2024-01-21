#include "remove_duplicates.hpp"
#include <vector>
#include <iostream>

int main(int argc, char** argv) {


    std::vector<int> vec{1, 1, 2, 5, 6, 1, 2, 4};

    rmv::RemoveDuplicates(vec);

    for (const auto& i : vec) {
        std::cout << i << " ";
    }

    return 0;

}