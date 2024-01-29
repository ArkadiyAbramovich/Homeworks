#include <iostream>
#include <variant>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>


std::variant<int, std::string, std::vector<int>> GetVariant() {

    std::srand(std::time(nullptr));
    int random_variable = std::rand() % 3;

    std::variant<int, std::string, std::vector<int>> result;
    switch (random_variable) {

    case 0:
        result = 5;
        break;

    case 1:
        result = "string";
        break;

    case 2:
        result = std::vector<int>{1, 2, 3, 4, 5};
        break;

    default:
        break;

    }

    return result;
}

int main() {

    std::variant<int, std::string, std::vector<int>> result = GetVariant();

    if (std::holds_alternative<int>(result)) {
        auto i = std::get<int>(result);
        std::cout << i * 2 << std::endl;
    } else if (std::holds_alternative<std::string>(result)) {
        auto str = std::get<std::string>(result);
        std::cout << str << std::endl;
    } else if (std::holds_alternative<std::vector<int>>(result)) {
        auto vec = std::get<std::vector<int>>(result);
        for (auto const& el : vec) {
            std::cout << el << " ";
        }
    }
    
}