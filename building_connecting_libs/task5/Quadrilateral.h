#pragma once
#include "figure.h"

class Quadrilateral : public Figure {

    protected:
    
    int side_a, side_b, side_c, side_d;
    int angle_a, angle_b, angle_c, angle_d;

    public:

    Quadrilateral(int side_a, int side_b, int  side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d);

    int getSide_a();

    int getSide_b();

    int getSide_c();

    int getSide_d();


    int getAngle_A();

    int getAngle_B();

    int getAngle_C();

    int getAngle_D();

    bool checkFigure();
   
    void printInfo();
};

