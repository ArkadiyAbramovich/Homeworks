#pragma once

class Array {

    private:

    int* ptr_;

    int size_;

    public:
    Array(int size);

   ~Array();

    void AddElement(const int& element);

    int GetElement(int index);

};