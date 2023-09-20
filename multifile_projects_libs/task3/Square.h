#pragma once
#include "Quadrilateral.h"

class Square : public Quadrilateral {

    public:

    Square(int side_a, int angle_a) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_a, angle_a, angle_a){};

    bool checkFigure();
};