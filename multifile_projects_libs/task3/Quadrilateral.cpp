#include "Quadrilateral.h"
#include <iostream>

    Quadrilateral::Quadrilateral(int side_a, int side_b, int  side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d) {
        name = "Четырехугольник";
        numberOfSides = 4;
        this->side_a = side_a;
        this->side_b = side_b;
        this->side_c = side_c;
        this->side_d = side_d;
        this->angle_a = angle_a;
        this->angle_b = angle_b;
        this->angle_c = angle_c;
        this->angle_d = angle_d;
    }

    int Quadrilateral::getSide_a() {
        return side_a;
    }

    int Quadrilateral::getSide_b() {
        return side_b;
    }

    int Quadrilateral::getSide_c() {
        return side_c;
    }

    int Quadrilateral::getSide_d() {
        return side_d;
    }


    int Quadrilateral::getAngle_A() {
        return angle_a;
    }

    int Quadrilateral::getAngle_B() {
        return angle_b;
    }

    int Quadrilateral::getAngle_C() {
        return angle_c;
    }

    int Quadrilateral::getAngle_D() {
        return angle_d;
    }

    bool Quadrilateral::checkFigure() {
    if((angle_a + angle_b + angle_c + angle_d) == 360 && Quadrilateral::getSides() == 4) {
        std::cout << "Правильная" << std::endl;
        return true; 
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }
}    

    void Quadrilateral::printInfo() {
        Figure::printInfo();
        std::cout << "Стороны: a = " << getSide_a() << " b = " << getSide_b() << " c = " << getSide_c() << " d = " << getSide_d() << std::endl;
        std::cout << "Углы: A = " << getAngle_A() << " B = " << getAngle_B() << " C = " << getAngle_C() << " D = " << getAngle_D() << std::endl;
        std::cout << '\n';
    }


