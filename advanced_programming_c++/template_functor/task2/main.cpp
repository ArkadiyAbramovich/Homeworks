#include "array_template.hpp"
#include <iostream>
#include <vector>


int main(int argc, char** argv) {

    auto test = TwoDimensionalArray<int>(2,3);
    test[0][0] = 4;
   
    std::cout << test[0][0] << std::endl;
    
    return 0;
}