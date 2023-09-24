#include <iostream>
#include <string>

int function(std::string str, int forbidden_length) {
    
    if(str.length() != forbidden_length) {
        return str.length();
    } else {
        std::cout << "Вы ввели слово запретной длины! До свидания!" << std::endl;
        throw std::runtime_error("bad_length");
    } 
}

int main(int argc, char** argv) {

    int forbidden_length, length;
    std::string str;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    while(str.length() != forbidden_length) {

        try {

        std::cout << "Введите слово: ";
        std::cin >> str;

        length = function(str, forbidden_length); 

        std::cout << "Длина слова " << '"' << str << '"' << " равна " << length << std::endl;

        }
        catch(const std::runtime_error& ex) {
            std::cout << ex.what() << std::endl;
        }

    }

    return 0;
}
