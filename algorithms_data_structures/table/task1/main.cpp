#include "hash.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {

std::string str = "";

while(true) {

    std::cout << "Введите строку: ";
    std::cin >> str;

    if(str == "exit") {
        std::cout << "Наивный хеш строки " << str << " = " << hash(str) << std::endl;
        break;
    }

    std::cout << "Наивный хеш строки " << str << " = " << hash(str) << std::endl;


    

}    

}
