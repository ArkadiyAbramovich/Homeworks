#include "Parallelogram.h"
#include "Exception.h"
#include <iostream>

    Parallelogram::Parallelogram(int side_a, int side_b, int angle_a, int angle_b) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_b, angle_a, angle_b) {
        
        Quadrilateral::name = "Параллелограмм";

        if((angle_a + angle_b +  angle_a + angle_b) != 360)  {
            throw std::domain_error("Ошибка создания фигуры. Причина сумма углов не равна 360");
        } else if(Quadrilateral::getSides() != 4) {
            throw std::domain_error("Ошибка создания фигуры. Причина количество сторон не равно 4");
        } else if(side_a != side_c || side_b != side_d) {
            throw std::domain_error("Ошибка создания фигуры. Причина сторона a не равна стороне c или сторона b не равна стороне d ");
        } else if(angle_a != angle_c || angle_b != angle_d) {
            throw std::domain_error("Ошибка создания фигуры. Причина угол A не равен углу C или угол  B не равен углу D");
        }

        std::cout << Parallelogram::getName() << "(стороны " << Parallelogram::getSide_a() << ", " << Parallelogram::getSide_b() << ", " << Parallelogram::getSide_c() << ", " << Parallelogram::getSide_d() << "; углы " << Parallelogram::getAngle_A() << ", " << Parallelogram::getAngle_B() << ", " << Parallelogram::getAngle_C() << ", " << Parallelogram::getAngle_D() << ") создан" << std::endl;
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
