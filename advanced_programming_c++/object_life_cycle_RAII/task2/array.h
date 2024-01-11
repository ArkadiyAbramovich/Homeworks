#pragma once

class Array {

    private:

    int* ptr_;

    int size_;

    int ptr_index_;

    public:
    
    Array(int size);

    ~Array();

    void operator=(const Array& arr);

    void AddElement(int element);

    int GetElement(int index);


};