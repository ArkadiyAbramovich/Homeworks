#include "Parallelogram.h"
#include <iostream>

    Parallelogram::Parallelogram(int side_a, int side_b, int angle_a, int angle_b) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_b, angle_a, angle_b) {
        Quadrilateral::name = "Параллелограмм";
    }

    bool Parallelogram::checkFigure() {
        if(side_a == side_c && side_b == side_d && angle_a == angle_c && angle_b == angle_d && (angle_a + angle_b + angle_c + angle_d) == 360 && Quadrilateral::getSides() == 4) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
