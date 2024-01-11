#pragma once
#include <iostream>
#include <exception>


template<class T>
class TwoDimensionalArray {
    private:
    int rows_ = 0;
    int columns_ = 0;
    T** ptr_array = nullptr;

    public:
    TwoDimensionalArray(int rows, int columns) {

        rows_ = rows;
        columns_ = columns;
        ptr_array = new T*[rows_];
        for(int i{}; i < rows_; i++) {
            ptr_array[i] = new T[columns_];
        }

  
    }

    ~TwoDimensionalArray() {

        for(int i{0}; i < rows_; i++) {
            delete[] ptr_array[i];
        }

        delete[] ptr_array;

    }

    int* operator[](int index) {

        return ptr_array[index];
        
    };

    const int* operator[](int index) const{

        return ptr_array[index];

    }; 

    int GetSize() const {
        return rows_ * columns_;
    } 
};
