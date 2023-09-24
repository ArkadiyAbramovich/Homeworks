#include "right_triangle.h"
#include "Exception.h"
#include <iostream>


RightTriangle::RightTriangle(int side_a, int side_b, int  side_c, int angle_a, int angle_b) : Triangle(side_a, side_b, side_c, angle_a, angle_b, 90) {
    
        name = "Прямоугольный треугольник";

        if((angle_a + angle_b +  angle_c) != 180)  {
            throw std::domain_error("Ошибка создания фигуры. Причина сумма углов не равна 180");
        } else if(RightTriangle::getSides() != 3) {
            throw std::domain_error("Ошибка создания фигуры. Причина количество сторон не равно 3");
        } else if(angle_c != 90) {
            throw std::domain_error("Ошибка создания фигуры. Причина один из углов должен быть 90");
    }
    
    std::cout << RightTriangle::getName() << "(стороны " << RightTriangle::getSide_a() << ", " << RightTriangle::getSide_b() << ", " << RightTriangle::getSide_c() << "; углы " << RightTriangle::getAngle_A() << ", " << RightTriangle::getAngle_B() << ", " << RightTriangle::getAngle_C() << ") создан" << std::endl;
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
