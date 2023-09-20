#pragma once
#include "triangle.h"

class IsoscelesTriangle : public Triangle {

public:

IsoscelesTriangle(int side_a, int side_b, int angle_a, int angle_b) : Triangle(side_a, side_b, side_a, angle_a, angle_b, angle_a ){};

bool checkFigure();
};