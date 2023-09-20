#include "IsoscelesTriangle.h"
#include <iostream>

    IsoscelesTriangle::IsoscelesTriangle(int side_a, int side_b, int angle_a, int angle_b) : Triangle(side_a, side_b, side_a, angle_a, angle_b, angle_a ) {
        Triangle::name = "Равнобедренный Треугольник";
    }

    bool IsoscelesTriangle::checkFigure() {
    if(angle_a == angle_c && side_a == side_c && (angle_a + angle_b + angle_c) == 180) {
        std::cout << "Правильная" << std::endl;
        return true; 
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }
}
