#pragma once
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {

    public:

    Rhombus(int side_a, int angle_a, int angle_b);

    bool checkFigure();
};