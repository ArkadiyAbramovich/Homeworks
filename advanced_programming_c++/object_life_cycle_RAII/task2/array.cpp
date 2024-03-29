#include "array.h"
#include "iostream"

Array::Array(int size) {

    ptr_ = new int[size];
    size_ = size;
    ptr_index_ = 0;

}

Array::~Array() {

    delete[] ptr_;

}

void Array::operator=(const Array& arr) {

    delete[] ptr_;

    size_ = arr.size_;
    int ptr_index = arr.ptr_index_;
    ptr_ = new int[size_];
    
    for (int i{}; i < ptr_index; i++) {
        ptr_[i] = arr.ptr_[i];
    }

   }

void Array::AddElement(int element) {

    if (ptr_index_ > size_-1) {
        throw std::runtime_error("Out of Range");
    }

    ptr_[ptr_index_] = element;
    ptr_index_++;

}

int Array::GetElement(int index) {
    
    if (index > size_) {
        throw std::runtime_error("Out of Range");
    }

    return ptr_[index - 1];


}




