#include "cube.hxx"

Cube::Cube(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3, int x4, int y4, int z4, int x5, int y5, int z5, int x6, int y6, int z6, int x7, int y7, int z7, int x8, int y8, int z8) : Square(x1, y1, x2, y2, x3, y3, x4, y4) {

   x5_ = x5;
   y5_ = y5;
   x6_ = x6;
   y6_ = y6;
   x7_ = y7;
   y7_ = y7;
   x8_ = x8;
   y8_ = y8;

}

void Cube::Shift(int x, int y, int z) {

    x1_ += x; y1_ += y; z1_ += z;
	x2_ += x; y2_ += y; z2_ += z;
	x3_ += x; y3_ += y; z3_ += z;
	x4_ += x; y4_ += y; z4_ += z;
	x5_ += x; y5_ += y; z5_ += z;
	x6_ += x; y6_ += y; z6_ += z;
	x7_ += x; y7_ += y; z7_ += z;
	x8_ += x; y8_ += y; z8_ += z;

}

void Cube::ScaleX(int x) {

    x1_ *= x; 
	x2_ *= x; 
	x3_ *= x; 
	x4_ *= x; 
	x5_ *= x; 
	x6_ *= x; 
	x7_ *= x; 
	x8_ *= x;

}

void Cube::ScaleY(int y) {

    y1_ *= y;
    y1_ *= y; 
    y1_ *= y; 
    y1_ *= y;  
    y1_ *= y; 
    y1_ *= y; 
    y1_ *= y; 
    y1_ *= y; 

}

void Cube::ScaleZ(int z) {

    z1_ *= z;
    z1_ *= z;
    z1_ *= z;
    z1_ *= z;
    z1_ *= z;
    z1_ *= z;
    z1_ *= z;
    z1_ *= z;

}

void Cube::Scale(int s) {

    x1_ /= s; y1_ /= s; z1_ /= s;
	x2_ /= s; y2_ /= s; z2_ /= s;
	x3_ /= s; y3_ /= s; z3_ /= s;
	x4_ /= s; y4_ /= s; z4_ /= s;
	x5_ /= s; y5_ /= s; z5_ /= s;
	x6_ /= s; y6_ /= s; z6_ /= s;
	x7_ /= s; y7_ /= s; z7_ /= s;
	x8_ /= s; y8_ /= s; z8_ /= s;

}

int Cube::Sqrt() {

    int a = std::abs(x1_ - x2_);
    int b = std::abs(y1_ - y2_);
    int c = std::abs(z1_ - z2_);

    return (2 * a * b + 2 * a * c + 2 * b * c);

}

int Cube::Volume() {

    int a = std::abs(x1_ - x2_);
    int b = std::abs(y1_ - y2_);
    int c = std::abs(z1_ - z2_);

    return (a * b * c);

}