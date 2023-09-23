#pragma once
#include "triangle.h"

class IsoscelesTriangle : public Triangle {

public:

IsoscelesTriangle(int side_a, int side_b, int angle_a, int angle_b);

bool checkFigure();
};