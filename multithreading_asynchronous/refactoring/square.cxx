#include "square.hxx"

Square::Square(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) : Line(x1, y1, x2, y2) {

    x3_ = x3;
    y3_ = y3;
    x4_ = x4;
    y4_ = y4;

}

void Square::Shift(int x, int y, int z) {

    x1_ += x;
    x2_ += x;
    x3_ += x;
    x4_ += x;
    y1_ += y;
    y2_ += y;
    y3_ += y;
    y4_ += y;

}
   
void Square::ScaleX(int x) {

    x1_ *= x;
    x2_ *= x;
    x3_ *= x;
    x4_ *= x;
}

void Square::ScaleY(int y) {

    y1_ *= y;
    y2_ *= y;
    y3_ *= y;
    y4_ *= y;

}

void Square::Scale(int s) {

    x1_ /= s;
    x2_ /= s;
    x3_ /= s;
    x4_ /= s;
    y1_ /= s;
    y2_ /= s;
    y3_ /= s;
    y4_ /= s;

}

int Square::Sqrt() {

    int a = std::abs(x1_ - x2_);
    int b = std::abs(y1_ - y2_);

    return (a * b);
}