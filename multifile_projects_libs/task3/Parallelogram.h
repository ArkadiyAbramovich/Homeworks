#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {

    public:

    Parallelogram(int side_a, int side_b, int angle_a, int angle_b) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_b, angle_a, angle_b){};

    bool checkFigure();
};