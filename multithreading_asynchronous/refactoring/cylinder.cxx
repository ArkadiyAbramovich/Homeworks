#include "cylinder.hxx"
#include <cmath>

Cylinder::Cylinder(int x1, int y1, int r, int h) : Circle(x1, y1, r) {

    h_ = h;

}

int Cylinder::Sqrt() {

    return (M_PI * r_ * r_ + 2 * r_ * h_);

}

int Cylinder::Volume() {

    return (M_PI * r_ * r_ * h_);

}