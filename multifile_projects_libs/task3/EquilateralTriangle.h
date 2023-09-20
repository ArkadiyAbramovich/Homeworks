#pragma once
#include "triangle.h"

class EquilateralTriangle : public Triangle {

    public:

    EquilateralTriangle(int side_a, int angle_a) : Triangle(side_a, side_a, side_a, angle_a, angle_a, angle_a){};

    bool checkFigure();
};