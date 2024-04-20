#pragma once
#include "square.hxx"

class Cube : public Square {

    public:
        Cube(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3, int x4, int y4, int z4, int x5, int y5, int z5, int x6, int y6, int z6, int x7, int y7, int z7, int x8, int y8, int z8);

        void Shift(int x, int y, int z) override;
        
        void ScaleX(int x) override;

        void ScaleY(int y) override;

        void ScaleZ(int z) override;

        void Scale(int s) override;

        int Sqrt();

        int Volume();

    protected:
        int x5_, y5_, x6_, y6_, x7_, y7_, x8_, y8_, z1_, z2_, z3_, z4_, z5_, z6_, z7_, z8_;

};