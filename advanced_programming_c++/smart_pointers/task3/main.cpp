#include "unique_ptr.hpp"
#include <iostream>
int main(int argc, char** argv) {

    UniquePtr<int> ptr = new int(5);
    std::cout << *ptr;
    auto ptr2 = ptr.Release();
    std::cout << *ptr2;

}