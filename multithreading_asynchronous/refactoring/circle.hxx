#pragma once
#include "shape.hxx"

class Circle : public Shape {

    public:
        Circle(int x1, int y1, int r);

        int Sqrt() override;

    protected:
        int x1_, y1_, r_;
};