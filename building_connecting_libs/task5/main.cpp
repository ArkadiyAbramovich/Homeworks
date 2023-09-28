#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

int main(int, char**) {

    Figure figure;
    figure.printInfo();

    
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Figure* figTriangle = &triangle;
    figTriangle->print(figTriangle);

    RightTriangle rightTriangle(10, 20, 30, 50, 50);
    Figure* figRightTriangle = &rightTriangle;
    figRightTriangle->print(figRightTriangle);
    
    IsoscelesTriangle isoscelesTriangle(10,20,50,60);
    Figure* figIsoscelesTriangl = &isoscelesTriangle;
    figIsoscelesTriangl->print(figIsoscelesTriangl);
   
    EquilateralTriangle equilateralTriangle(30, 60);
    Figure* figEquilateralTriangle = &equilateralTriangle;
    figEquilateralTriangle->print(figEquilateralTriangle);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Figure* figQuadrilateral = &quadrilateral;
    figQuadrilateral->print(figQuadrilateral);

    Rectangle rectangle(10, 20, 90);
    Figure* figRectangle = &rectangle;
    figRectangle->print(figRectangle);

    Square square(20, 90);
    Figure* figSquare = &square;
    figSquare->print(figSquare);

    Parallelogram parallelogram(20, 30, 30, 40);
    Figure* figParallelogram = &parallelogram;
    figParallelogram->print(figParallelogram);

    Rhombus rhombus(30, 30, 40);
    Figure* figRhombus = &rhombus;
    figRhombus->print(figRhombus);
    
}