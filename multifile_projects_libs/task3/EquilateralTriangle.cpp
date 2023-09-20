#include "EquilateralTriangle.h"
#include <iostream>

    EquilateralTriangle::EquilateralTriangle(int side_a, int angle_a) : Triangle(side_a, side_a, side_a, angle_a, angle_a, angle_a) {
        Triangle::name = "Равносторонний Треугольник";
    }

    bool EquilateralTriangle::checkFigure() {
        if((angle_a, angle_b, angle_c) == 60 && side_a == side_b && side_b == side_c && side_c == side_a) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            eturn false;
        }
    }
