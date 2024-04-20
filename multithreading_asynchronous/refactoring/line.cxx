#include "line.hxx"

Line::Line(int x1, int y1, int x2, int y2) {

    x1_ = x1;
    y1_ = y1;
    x2_ = x2;
    y2_ = y2;
}

void Line::Shift(int x, int y, int z) {
    
    x1_ += x;
    x2_ += x;
    y1_ += y;
    y2_ += y;
}

void Line::ScaleX(int x) {

    x1_ *= x;
    x2_ *= x;
}

void Line::ScaleY(int y) {

    y1_ *= y;
    y2_ *= y;

}

void Line::Scale(int s) {

    x1_ /= s;
    x2_ /= s;
    y1_ /= s;
    y2_ /= s;

}

