#include "array.h"
#include <iostream>

int main() {

<<<<<<< HEAD
    Array arr(5);
    arr.AddElement(5);
    arr.AddElement(1);
    arr.AddElement(4);
 
    Array new_arr(2);
    new_arr.AddElement(44);
    new_arr.AddElement(54);

    arr = new_arr;

    std::cout << arr.GetElement(5) << std::endl;
=======
    Array arr(2);
    arr.AddElement(1);
    // arr.AddElement(4);
    // arr.AddElement(155);

    Array new_arr(2);
    new_arr.AddElement(44);
    // new_arr.AddElement(34);
    // new_arr.AddElement(34);
    
    arr = new_arr;

>>>>>>> bd44e40be65cba4d5d658bf536763cba0a301d22
}