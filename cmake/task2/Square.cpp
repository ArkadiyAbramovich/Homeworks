#include "Square.h"
#include <iostream>
 
    Square::Square(int side_a, int angle_a) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_a, angle_a, angle_a) {
        Quadrilateral::name = "Квадрат";
    }

    bool Square::checkFigure() {
        if((angle_a, angle_b, angle_c, angle_d) == 90 && side_a == side_b && side_b == side_c && side_c == side_d && side_d == side_a && (angle_a + angle_b + angle_c + angle_d) == 360 && Quadrilateral::getSides() == 4) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
