#include "print_pyramid.h"
#include <iostream>

int main(int argc, char** argv) {

    int arr1[]{1, 3, 6, 5, 9, 8};
    int arr2[]{94, 67, 18, 44, 55, 12, 6, 42}; 
    int arr3[]{16, 11, 9, 10, 5, 6, 8, 1, 2, 4};                                          

    std::cout << "Исходный массив: ";

    for (int i{}; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
        std::cout << arr1[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Пирамида: " << std::endl;

    PrintPyramid(arr1, 6);

}



