#include "big_integer.hpp"
#include <string>
#include <iostream>


int main(int argc, char** argv) {

    auto number_1 = BigInteger("114575");
    auto number_2 = BigInteger("78524");
    auto result_1 = number_1 + number_2;
    auto result_2 = number_1 * number_2;
    std::cout << result_1 << std::endl;
    std::cout << result_2 << std::endl;
    
    return 0;

}
