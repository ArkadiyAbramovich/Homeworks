#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {

    public:

    Parallelogram(int side_a, int side_b, int angle_a, int angle_b);

    bool checkFigure();
};