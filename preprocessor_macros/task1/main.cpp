#include <iostream>

#define MODE 1

int main(int, char**) {

#ifndef MODE

#error You need define MODE!

#endif

#if MODE == 0

    std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1

    double add(double num1, double num2);

    double num1, num2;

    std::cout << "Работаю в боевом режиме" << std::endl;

    std::cout << "Введите число 1: ";
    std::cin >> num1;

    std::cout << "Введите число 1: ";
    std::cin >> num2;

    std::cout << "Результат сложения: " << add(num1, num2) << std::endl;
    
#else 

    std::cout << "Неизвестый режим" << std::endl;

#endif

}

double add(double num1, double num2) {
        return num1 + num2;
    }