#include "circle.hxx"
#include <cmath>

Circle::Circle(int x1, int y1, int r) : x1_{x1}, y1_{y1} {};

int Circle::Sqrt() {

    return (M_1_PI * r_ * r_);

}