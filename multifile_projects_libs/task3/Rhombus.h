#pragma once
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {

    public:

    Rhombus(int side_a, int angle_a, int angle_b) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_b, angle_a, angle_b){};

    bool checkFigure();
};