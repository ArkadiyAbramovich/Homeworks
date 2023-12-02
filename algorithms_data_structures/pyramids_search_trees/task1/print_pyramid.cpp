#include "print_pyramid.h"
#include <iostream>

int GetIndex(int* arr, int index);

void GetRoot(int* arr);

int LeftIndex(int index);

int RightIndex(int index);

int ParentIndex(int child_index);

void PrintPyramid(int* arr, int size) {

    GetRoot(arr);

    for (int i{}; i < size; i++) {
        for(int j{}; j < size; j++) {

    std::cout << i + 1 << " left(" << GetIndex(arr, i) << ") " << arr[LeftIndex(i)] << std::endl;
    std::cout << i + 1 << " right(" << GetIndex(arr, i) << ") " << arr[RightIndex(i)] << std::endl;

        }
    }        
        
}

int GetIndex(int* arr, int index) {
    return arr[index];
}

void GetRoot(int* arr) {

    std::cout << "0" << " root " << arr[0] << std::endl;
}

int LeftIndex(int index) {
    return index * 2 + 1;
}

int RightIndex(int index) {
    
    return index * 2 + 2;
}

int ParentIndex(int child_index) {
    return (child_index - 1) / 2;
}