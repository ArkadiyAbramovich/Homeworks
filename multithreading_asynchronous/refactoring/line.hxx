#pragma once
#include "shape.hxx"

class Line : public Shape {

    public:
        Line(int x1, int y1, int x2, int y2);

        void Shift(int x, int y, int z) override;
        
        void ScaleX(int x) override;

        void ScaleY(int y) override;

        void Scale(int s) override;

    protected:
        int x1_, y1_, x2_, y2_;

};