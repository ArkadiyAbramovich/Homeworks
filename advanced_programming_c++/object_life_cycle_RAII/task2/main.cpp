#include "array.h"
#include <iostream>

int main() {

    Array arr(2);
    arr.AddElement(1);
    // arr.AddElement(4);
    // arr.AddElement(155);

    Array new_arr(2);
    new_arr.AddElement(44);
    // new_arr.AddElement(34);
    // new_arr.AddElement(34);
    
    arr = new_arr;

}