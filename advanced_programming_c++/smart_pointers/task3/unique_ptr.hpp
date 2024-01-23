#pragma once
#include <iostream>

template<typename T>
class UniquePtr{
    private:
        T* ptr_ = nullptr;

    public:

        UniquePtr(const UniquePtr&) = delete;

        UniquePtr(T* ptr) : ptr_{ptr} {};

        ~UniquePtr() {
            delete ptr_;
        }
    
        T* Release() {
            T* ptr = ptr_;
            ptr_ = nullptr;
            return ptr;
        }

        UniquePtr& operator=(const UniquePtr&) = delete;

        T& operator*() {
            return *ptr_;
            
        }

};