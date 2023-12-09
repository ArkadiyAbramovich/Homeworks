#include "array.h"
#include "iostream"

Array::Array(int size) {

    ptr_ = new int[size];
    size_ = size;

}

Array::~Array() {

    delete[] ptr_;

}

void Array::AddElement(const int& element) {

    static int ptr = 1;

    if (ptr > size_) {
        throw std::runtime_error("Out of Range");
    }
    
    ptr_[ptr-1] = element;
    ptr++;
    

}

int Array::GetElement(int index) {
    
    if (index > size_) {
        throw std::runtime_error("Out of Range");
    }

    return ptr_[index - 1];

}