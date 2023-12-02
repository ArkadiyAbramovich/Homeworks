#include "hash.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {

    std::string str = " ";
    int n = 0;
    int p = 0;

    std::cout << "Введите p: ";
    std::cin >> p;

    std::cout << "Введите n: ";
    std::cin >> n;

    while (n <= 0) {
        std::cout << "n Должен быть положительным" << std::endl;
        std::cout << "Введите n: ";
        std::cin >> n;
    }

    while (true){

        std::cout << "Введите строку: ";
        std::cin >> str;

        if(str == "exit") {
            std::cout << "Хеш строки " << str << " = " << hash(str, n, p) << std::endl;
            break;
        }

        std::cout << "Хеш строки " << str << " = " << hash(str, n, p) << std::endl;


    }
    

}