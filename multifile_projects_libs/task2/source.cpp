#include "calculator.h"
#include <iostream>

int main(int, char**) {
    
    while(true) {

    Calculator calc;
    int num1, num2;

    std::cout << "Введите num1: ";
    std::cin >> num1;

    while(!(calc.set_num1(num1))) {

        std::cout << "Неверный ввод!" << std::endl;
        std::cout << "Введите num1: ";
        std::cin >> num1; 
    }
 
        
    std::cout << "Введите num2: ";
    std::cin >> num2;
    
    while(!(calc.set_num2(num2))) {

        std::cout << "Неверный ввод!" << std::endl;
        std::cout << "Введите num2: ";
        std::cin >> num2; 
    }
     

    std::cout << "num1 + num2 = " << calc.add() << std::endl;
    std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
    std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
    std::cout << "num1 * num2 = " << calc.multiplay() << std::endl;
    std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
    std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;

    }
}