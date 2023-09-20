#include "math.h"
#include <iostream>

int main(int argc, char** argv) {

    double num1, num2;
    int oper;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> oper;

    switch(oper) {
        
        case 1:
        std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
        break;

        case 2:
        std::cout << num1 << " - " << num2 << " = " << sub(num1, num2) << std::endl;
        break;

        case 3:
        std::cout << num1 << " * " << num2 << " = " << mul(num1, num2) << std::endl;
        break;

        case 4:
        std::cout << num1 << " / " << num2 << " = " << divi(num1, num2) << std::endl;
        break;

        case 5:
        std::cout << num1 << " в степени " << num2 << " = " << pow(num1) << std::endl;
        break;
    }

    return 0;
}