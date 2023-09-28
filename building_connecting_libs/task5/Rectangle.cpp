#include "Rectangle.h"
#include <iostream>

    Rectangle::Rectangle(int side_a, int side_b, int angle_a) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_a, angle_a, angle_a) {
        Quadrilateral::name = "Прямоугольник";
    }

    bool Rectangle::checkFigure() {
        if((angle_a, angle_b, angle_c, angle_d) == 90 && side_a == side_c && side_b == side_d && (angle_a + angle_b + angle_c + angle_d) == 360 && Quadrilateral::getSides() == 4) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
