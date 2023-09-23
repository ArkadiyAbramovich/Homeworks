#pragma once
#include "triangle.h"

class EquilateralTriangle : public Triangle {

    public:

    EquilateralTriangle(int side_a, int angle_a);

    bool checkFigure();
};