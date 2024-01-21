#pragma once
#include <iostream>

namespace tmp {

    template<typename T>
    void PrintContainer(const T& container) {

        auto it = container.cbegin();
        while (it != container.cend()) {
            std::cout << *it << " ";
            it++;
        }

    }

}