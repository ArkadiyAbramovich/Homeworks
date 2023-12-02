#include <iostream>
#include "print_array.h"
#include "append_to_dynamic_array.h"

int main(int argc, char** argv) {

try {

        static int logic_size = 0, actual_size = 0;
        bool flag = true;
        int new_element = 0;

        std::cout << "Введите фактический размер массива: ";
        std::cin >> actual_size; 

        std::cout << "Введите логический размер массива: ";
        std::cin >> logic_size;

        if (logic_size > actual_size) {
            throw std::logic_error("Ошибка! Логический размер массива не может превышать фактический!");
        }

        int* arr = new int[actual_size];

        for (int i{}; i < logic_size; i++) {
            std::cout << "Введите arr[" << i << "]: "; std::cin >> arr[i];
        }

        std::cout << "Динамический массив: ";
        PrintArray(arr, actual_size, logic_size);

        while(flag) {

            std::cout << std::endl;    
            std::cout << "Введите элемент для добавления: ";
            std::cin >> new_element;
                if (new_element == 0) {
                    flag = false;
                    std::cout << "Спасибо! Ваш массив: ";
                    PrintArray(arr, actual_size, logic_size);
                    break;
                }

            arr = AppentToDynamicArray(arr, actual_size, logic_size, new_element);
            std::cout << "Динамический массив: ";
            PrintArray(arr, actual_size, logic_size);

        }



    } catch (const std::logic_error& ex) {
        std::cout << ex.what() << std::endl;
    }
}