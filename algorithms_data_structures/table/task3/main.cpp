#include "hash_rabin_karp.h"
#include <iostream>

int main(int argc, char** argv) {

    std::string str = "";
    std::string sub_str = "";

    std::cout << "Введите строку, в которой будет осуществляться поиск: ";
    std::cin >> str;

    while (true) {

        std::cout << "Введите подстроку, которую нужно найти: ";
        std::cin >> sub_str;
        
        std::cout << "Подстрока " << sub_str << " найдена по индексу " << hash_rabin_karp(str, sub_str) << std::endl;

    }
    

}