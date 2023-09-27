#include "right_triangle.h"
#include <iostream>


RightTriangle::RightTriangle(int side_a, int side_b, int  side_c, int angle_a, int angle_b) : Triangle(side_a, side_b, side_c, angle_a, angle_b, 90) {
        name = "Прямоугольный треугольник";
}

bool RightTriangle::checkFigure() {
    if(angle_c == 90 && (angle_a + angle_c + angle_b) == 180) {
        std::cout << "Правильная" << std::endl;
        return true; 
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }   
}
