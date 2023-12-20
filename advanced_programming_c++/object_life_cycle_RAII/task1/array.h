#pragma once

class Array {

    private:

    int* ptr_;

    int size_;

    int ptr_index_;

    public:
    Array(int size);

   ~Array();

    void AddElement(int element);

    void AddElement(const int& element);

    int GetElement(int index);

};