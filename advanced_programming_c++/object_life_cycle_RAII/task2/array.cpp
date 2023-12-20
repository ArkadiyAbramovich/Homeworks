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

Array& Array::operator=(const Array& arr) {

    for (int i{}; i <= arr.size_; i++) {
        ptr_[ptr_index_+i] = arr.ptr_[i];
    }

    return *this;

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




