#include "Leaver.h"
#include <string>
#include <iostream>

int main(int argc, char** argv) {

    std::string leave_;

    std::cout << "Введите имя: ";
    std::cin >> leave_;

    Leaver leave;
    std::cout << leave.Leave(leave_) << std::endl;
    

}