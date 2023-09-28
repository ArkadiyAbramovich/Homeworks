#pragma once
#include "Quadrilateral.h"

class Square : public Quadrilateral {

    public:

    Square(int side_a, int angle_a);

    bool checkFigure();
};