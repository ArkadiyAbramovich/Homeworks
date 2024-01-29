#include "template_move.hpp"
#include "iostream"
#include <vector>
#include <string>

int main(int argc, char** argv) {

    std::vector<std::string> one{"test_string1", "test_strring2"};
    std::vector<std::string> two;
    MoveVector(two, one);

    for(const auto& i : two) {
        std::cout << i << " ";
    }

}