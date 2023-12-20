#pragma once

class Array {

    private:

    int* ptr_;

    int size_;

<<<<<<< HEAD
    int ptr_index_;

    public:
    Array(int size);

    ~Array();

    Array& operator=(const Array& arr);
=======
    public:
    Array(int size);

   ~Array();

   Array* operator=(const Array& arr);
>>>>>>> bd44e40be65cba4d5d658bf536763cba0a301d22

    void AddElement(int element);

    int GetElement(int index);

<<<<<<< HEAD
    int GetPtrIndex();

    int GetSize();

=======
>>>>>>> bd44e40be65cba4d5d658bf536763cba0a301d22
};