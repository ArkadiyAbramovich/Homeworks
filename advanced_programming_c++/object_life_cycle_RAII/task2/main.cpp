#include "array.h"
#include <iostream>

int main() {

    Array arr(5);
    arr.AddElement(5);
    arr.AddElement(1);
    arr.AddElement(4);
 
    Array new_arr(2);
    new_arr.AddElement(44);
    new_arr.AddElement(54);

    arr = new_arr;

    std::cout << arr.GetElement(5) << std::endl;

}