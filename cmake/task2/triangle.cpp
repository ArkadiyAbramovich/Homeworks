#include "triangle.h"
#include <iostream>

    Triangle::Triangle(int side_a, int side_b, int  side_c, int angle_a, int angle_b, int angle_c) {
        name = "Треугольник";
        numberOfSides = 3;
        this->side_a = side_a;
        this->side_b = side_b;
        this->side_c = side_c;
        this->angle_a = angle_a;
        this->angle_b = angle_b;
        this->angle_c = angle_c;
    }

    int Triangle::getSide_a() {
        return side_a;
    }

    int Triangle::getSide_b() {
        return side_b;
    }

    int Triangle::getSide_c() {
        return side_c;
    }


    int Triangle::getAngle_A() {
        return angle_a;
    }

    int Triangle::getAngle_B() {
        return angle_b;
    }

    int Triangle::getAngle_C() {
        return angle_c;
    }

    bool Triangle::checkFigure() {
        if((angle_a + angle_b +  angle_c) == 180 && Triangle::getSides() == 3) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }   
    }

    void Triangle::printInfo() {
        Figure::printInfo();
        std::cout << "Стороны: a = " << getSide_a() << " b = " << getSide_b() << " c = " << getSide_c() << std::endl;
        std::cout << "Углы: A = " << getAngle_A() << " B = " << getAngle_B() << " C = " << getAngle_C() << std::endl;
        std::cout << '\n';
    }

