#pragma once
#include <iostream>

template<class T>
class Vector {

private:
int size_ = 0;
T* ptr_ = nullptr;
int index = 0;

public:
Vector() {
    ptr_ = new T[1];
    size_ = 1;

}

~Vector() {
    delete[] ptr_;
}

T& at(int index) {
    if (index > size_) {
        std::cerr << "Error" << std::endl;
        std::exit(0);
    }
    return ptr_[index];
}

void push_back(T value) {

    if (index > size_-1) {
        size_ *= 2;
        T* p_ptr_ = new T[size_];
        for (int i{}; i < index; i++) {
            p_ptr_[i] = ptr_[i];
        }

    
        delete ptr_;
        ptr_ = p_ptr_;

        ++index;
        ptr_[index-1] = value;

        
        
    } else {

        ptr_[index] = value;
        index++;
    }
    
    
}

int size() {
    return size_;
}

int capacity() {
    return size_ - index;
}

};

