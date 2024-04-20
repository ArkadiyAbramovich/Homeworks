#include <iostream>
#include "shape.hxx"
#include "line.hxx"
#include "square.hxx"
#include "cube.hxx"
#include "circle.hxx"
#include "cylinder.hxx"

int main(int argc, char** argv) {

   Cylinder cl(2, 3, 4, 5);
   std::cout << cl.Volume();

    return 0;
}