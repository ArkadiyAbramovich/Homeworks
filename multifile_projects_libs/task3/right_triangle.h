#pragma once
#include "triangle.h"

class RightTriangle : public Triangle {

public:

RightTriangle(int side_a, int side_b, int  side_c, int angle_a, int angle_b);

bool checkFigure();  
};