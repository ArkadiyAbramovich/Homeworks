#include "EquilateralTriangle.h"
#include "Exception.h"
#include <iostream>

    EquilateralTriangle::EquilateralTriangle(int side_a, int angle_a) : Triangle(side_a, side_a, side_a, angle_a, angle_a, angle_a) {
        
        name = "Равносторонний Треугольник";

        if((angle_a + angle_b +  angle_c) != 180)  {
            throw std::domain_error("Ошибка создания фигуры. Причина сумма углов не равна 180");
        } else if(Triangle::getSides() != 3) {
            throw std::domain_error("Ошибка создания фигуры. Причина количество сторон не равно 3");
        } else if(angle_a != 60) {
            throw std::domain_error("Ошибка создания фигуры. Причина все углы болжны быть 60");
        } else if(side_a != side_b || side_b != side_c || side_c != side_a) {
            throw std::domain_error("Ошибка создания фигуры. Причина все стороны должны быть равны");
        }

        std::cout << EquilateralTriangle::getName() << "(стороны " << EquilateralTriangle::getSide_a() << ", " << EquilateralTriangle::getSide_b() << ", " << EquilateralTriangle::getSide_c() << "; углы " << EquilateralTriangle::getAngle_A() << ", " << EquilateralTriangle::getAngle_B() << ", " << EquilateralTriangle::getAngle_C() << ") создан" << std::endl;
    }

    bool EquilateralTriangle::checkFigure() {
        if((angle_a, angle_b, angle_c) == 60 && side_a == side_b && side_b == side_c && side_c == side_a) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
