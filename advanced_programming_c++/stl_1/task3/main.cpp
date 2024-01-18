#include "vector.hpp"
#include <iostream>

int main() {


    Vector<int> vec;
    vec.push_back(4);
    vec.push_back(4);
    vec.push_back(4);
    std::cout << vec.at(0) << std::endl;
    std::cout << vec.size() << std::endl;
    std::cout << vec.capacity() << std::endl;


}