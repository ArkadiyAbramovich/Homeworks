#pragma once
#include "line.hxx"
#include <cmath>

class Square : public Line {

    public:
        Square(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

        void Shift(int x, int y, int z) override;
        
        void ScaleX(int x) override;

        void ScaleY(int y) override;

        void Scale(int s) override;

        int Sqrt();

    protected:
        int x3_, y3_, x4_, y4_;
        
};