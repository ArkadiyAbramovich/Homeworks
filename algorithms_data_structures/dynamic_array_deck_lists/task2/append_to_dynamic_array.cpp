#include "append_to_dynamic_array.h"
#include <iostream>

int* AppentToDynamicArray(int* arr, int& actual_size, int& logic_size, int& new_element) {
    
    if (logic_size < actual_size) {
        ++logic_size;
        arr[logic_size-1] = new_element;
        return arr;
    } else if (logic_size >= actual_size) {
        actual_size *= 2;
        int* new_arr = new int[actual_size];
        for (int i{}; i < logic_size; i++) {
            new_arr[i] = arr[i];
        }
        ++logic_size;
        new_arr[logic_size-1] = new_element;
        delete[] arr;
        arr = new_arr;
        return arr;

    }
    return 0;
}

