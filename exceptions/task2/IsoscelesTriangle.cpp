#include "IsoscelesTriangle.h"
#include "Exception.h"
#include <iostream>

    IsoscelesTriangle::IsoscelesTriangle(int side_a, int side_b, int angle_a, int angle_b) : Triangle(side_a, side_b, side_a, angle_a, angle_b, angle_a ) {
        
        name = "Равнобедренный Треугольник";

        if((angle_a + angle_b +  angle_c) != 180)  {
            throw std::domain_error("Ошибка создания фигуры. Причина сумма углов не равна 180");
        } else if(Triangle::getSides() != 3) {
            throw std::domain_error("Ошибка создания фигуры. Причина количество сторон не равно 3");
        } else if(angle_a != angle_c) {
            throw std::domain_error("Ошибка создания фигуры. Причина угол A не равен углу C");
        } else if(side_a != side_c) {
            throw std::domain_error("Ошибка создания фигуры. Причина сторона a не равне стороне c");
        }

        std::cout << IsoscelesTriangle::getName() << "(стороны " << IsoscelesTriangle::getSide_a() << ", " << IsoscelesTriangle::getSide_b() << ", " << IsoscelesTriangle::getSide_c() << "; углы " << IsoscelesTriangle::getAngle_A() << ", " << IsoscelesTriangle::getAngle_B() << ", " << IsoscelesTriangle::getAngle_C() << ") создан" << std::endl;
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
