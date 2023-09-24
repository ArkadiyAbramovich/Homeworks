#include "Rhombus.h"
#include "Exception.h"
#include <iostream>

    Rhombus::Rhombus(int side_a, int angle_a, int angle_b) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_b, angle_a, angle_b) {
        
        Quadrilateral::name = "Ромб";

        if((angle_a + angle_b +  angle_c + angle_d) != 360)  {
            throw std::domain_error("Ошибка создания фигуры. Причина сумма углов не равна 360");
        } else if(Quadrilateral::getSides() != 4) {
            throw std::domain_error("Ошибка создания фигуры. Причина количество сторон не равно 4");
        } else if(angle_a != angle_c) {
            throw std::domain_error("Ошибка создания фигуры. Причина угол A не равен углу C или угол  B не равен углу D");
        } else if(side_a != side_b) {
            throw std::domain_error("Ошибка создания фигуры. Причина все стороны должны быть равны");
        }

        std::cout << Rhombus::getName() << "(стороны " << Rhombus::getSide_a() << ", " << Rhombus::getSide_b() << ", " << Rhombus::getSide_c() << ", " << Rhombus::getSide_d() << "; углы " << Rhombus::getAngle_A() << ", " << Rhombus::getAngle_B() << ", " << Rhombus::getAngle_C() << ", " << Rhombus::getAngle_D() << ") создан" << std::endl;
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
