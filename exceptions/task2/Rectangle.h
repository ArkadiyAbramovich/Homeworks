#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {

    public:

    Rectangle(int side_a, int side_b, int angle_a);

    bool checkFigure();
};