#include "Greeter.h"
#include <string>
#include <iostream>

int main(int argc, char** argv) {

    std::string greet_;
    Greeter greet;

    std::cout << "Введите имя: ";
    std::cin >> greet_;

    std::cout << greet.Greet(greet_) << std::endl;

}