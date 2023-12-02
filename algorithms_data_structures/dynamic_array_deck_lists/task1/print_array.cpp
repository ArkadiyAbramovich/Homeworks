#include "print_array.h"
#include <iostream>

void PrintArray(int* arr, int actual_size, int logic_size) {
    std::cout << "Динамический массив: ";
    for (int i{}; i < logic_size; i++) {
        std::cout << arr[i] << " ";
        if (i == logic_size-1) {
            for (int i{}; i < actual_size - logic_size; ++i) {
            std::cout << "_" << " ";
            }
        }
    }
}