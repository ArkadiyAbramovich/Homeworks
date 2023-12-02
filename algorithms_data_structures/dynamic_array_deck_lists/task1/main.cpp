#include <iostream>
#include "print_array.h"

int main(int argc, char** argv) {

try {

        int logic_size, actual_size = 0;

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

        PrintArray(arr, actual_size, logic_size);

        delete[] arr;

    } catch (const std::logic_error& ex) {
        std::cout << ex.what() << std::endl;
    }
}