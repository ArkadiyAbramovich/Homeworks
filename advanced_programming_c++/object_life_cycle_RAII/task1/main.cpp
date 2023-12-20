#include "array.h"
#include <iostream>

int main() {

    try {

        Array arr(5);
        arr.AddElement(9);
        arr.AddElement(4);
        arr.AddElement(155);
        arr.AddElement(14);
        arr.AddElement(15);
      
        std::cout << arr.GetElement(1) << std::endl;
<<<<<<< HEAD
         std::cout << arr.GetElement(2) << std::endl;
=======
        std::cout << arr.GetElement(2) << std::endl;
        std::cout << arr.GetElement(3) << std::endl;
        std::cout << arr.GetElement(4) << std::endl;
        std::cout << arr.GetElement(5) << std::endl;
>>>>>>> bd44e40be65cba4d5d658bf536763cba0a301d22

    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

}