#pragma once
#include "circle.hxx"

class Cylinder : public Circle {

    public:
        Cylinder(int x1, int y1, int r, int h);

        int Sqrt() override;

        int Volume() override;

    protected:
        int h_;
};