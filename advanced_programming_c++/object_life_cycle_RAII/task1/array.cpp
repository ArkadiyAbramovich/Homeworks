#include "array.h"
#include "iostream"

Array::Array(int size) {

    ptr_ = new int[size];
    size_ = size;
    ptr_index_ = 1;

}

Array::~Array() {

    delete[] ptr_;

}

void Array::AddElement(const int& element) {

    if (ptr_index_ > size_) {
        throw std::runtime_error("Out of Range");
    }
    
    ptr_[ptr_index_-1] = element;
    ptr_index_++;
}

int Array::GetElement(int index) {
    
    if (index > size_) {
        throw std::runtime_error("Out of Range");
    }

    return ptr_[index - 1];

}


