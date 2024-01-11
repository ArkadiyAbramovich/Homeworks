#include "functor.hpp"
#include <iostream>
#include <vector>

int main(int argc, char** argv) {

    std::vector<int> vec{4, 1, 3, 6, 25, 54};
    Functor functor;
    functor(vec);
    std::cout << "GetSum() = " << functor.GetSum() << std::endl;
    std::cout << "GetSum() = " << functor.GetCount() << std::endl;

}