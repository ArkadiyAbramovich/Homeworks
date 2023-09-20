#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {

    public:

    Rectangle(int side_a, int side_b, int angle_a) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_a, angle_a, angle_a){};

    bool checkFigure();
};