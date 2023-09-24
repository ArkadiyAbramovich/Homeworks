#include "Square.h"
#include "Exception.h"
#include <iostream>
 
    Square::Square(int side_a, int angle_a) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_a, angle_a, angle_a) {
        
        Quadrilateral::name = "Квадрат";

        if((angle_a + angle_b +  angle_c + angle_c) != 360)  {
            throw std::domain_error("Ошибка создания фигуры. Причина сумма углов не равна 360");
        } else if(Quadrilateral::getSides() != 4) {
            throw std::domain_error("Ошибка создания фигуры. Причина количество сторон не равно 4");
        } else if(side_a != side_b) {
            throw std::domain_error("Ошибка создания фигуры. Причина все стороны должны быть равны");
        } else if(angle_a != 90) {
            throw std::domain_error("Ошибка создания фигуры. Причина углы болжны быть 90");
        }

        std::cout << Square::getName() << "(стороны " << Square::getSide_a() << ", " << Square::getSide_b() << ", " << Square::getSide_c() << ", " << Square::getSide_d() << "; углы " << Square::getAngle_A() << ", " << Square::getAngle_B() << ", " << Square::getAngle_C() << ", " << Square::getAngle_D() << ") создан" << std::endl;
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
