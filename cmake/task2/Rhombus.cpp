#include "Rhombus.h"
#include <iostream>

    Rhombus::Rhombus(int side_a, int angle_a, int angle_b) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_b, angle_a, angle_b) {
        Quadrilateral::name = "Ромб";
    }

    bool Rhombus::checkFigure() {
        if(angle_a == angle_c && angle_b == angle_d && side_a == side_b && side_b == side_c && side_c == side_d && side_d == side_a && (angle_a + angle_b + angle_c + angle_d) == 360 && Quadrilateral::getSides() == 4) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
