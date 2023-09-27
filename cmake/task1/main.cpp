#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;

    std::cout << "Здравствуйте, " << name << "!" << std::endl;
}
