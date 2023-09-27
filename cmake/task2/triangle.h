#pragma once
#include "figure.h"

class Triangle : public Figure {
    
    protected:

    int side_a, side_b, side_c;
    int angle_a, angle_b, angle_c;

    public:

    Triangle(int side_a, int side_b, int  side_c, int angle_a, int angle_b, int angle_c);

    int getSide_a();

    int getSide_b();

    int getSide_c();

    int getAngle_A();

    int getAngle_B();

    int getAngle_C();

    bool checkFigure();

    void printInfo();

};