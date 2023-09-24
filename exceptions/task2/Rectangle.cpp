#include "Rectangle.h"
#include "Exception.h"
#include <iostream>

    Rectangle::Rectangle(int side_a, int side_b, int angle_a) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_a, angle_a, angle_a) {
        
        Quadrilateral::name = "Прямоугольник";

        if((angle_a + angle_b +  angle_c + angle_c) != 360)  {
            throw std::domain_error("Ошибка создания фигуры. Причина сумма углов не равна 360");
        } else if(Quadrilateral::getSides() != 4) {
            throw std::domain_error("Ошибка создания фигуры. Причина количество сторон не равно 4");
        } else if(side_a != side_c || side_b != side_d) {
            throw std::domain_error("Ошибка создания фигуры. Причина сторона a не равне стороне c или сторона d не равна стороне b");
        } else if(angle_a && angle_b && angle_c && angle_d != 90) {
            throw std::domain_error("Ошибка создания фигуры. Причина углы болжны быть 90");
        }

        std::cout << Rectangle::getName() << "(стороны " << Rectangle::getSide_a() << ", " << Rectangle::getSide_b() << ", " << Rectangle::getSide_c() << ", " << Rectangle::getSide_d() << "; углы " << Rectangle::getAngle_A() << ", " << Rectangle::getAngle_B() << ", " << Rectangle::getAngle_C() << ", " << Rectangle::getAngle_D() << ") создан" << std::endl;
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
