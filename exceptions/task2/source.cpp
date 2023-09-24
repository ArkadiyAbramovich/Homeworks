#include "triangle.h"
#include "right_triangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Exception.h"
#include <exception>
#include <iostream>


int main(int, char**) {

    try {

    Triangle triangle(12, 20, 30, 50, 60, 70);

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    try {

    RightTriangle rightTriangle(10, 20, 40, 50, 40);

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    try {

    IsoscelesTriangle isoscelesTriangle(10,20,50,80);

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    try {

    EquilateralTriangle equilateralTriangle(30, 60);

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    try {

    Quadrilateral quadrilateral(10, 20, 30, 40, 80, 90, 70, 120);

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }


    try {

    Rectangle rectangle(10, 20, 90);

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    try {

    Square square(20, 90);

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }


    try {

    Parallelogram parallelogram(20, 30, 90, 90);

    } catch(const std::exception& ex) {

        std::cerr << ex.what() << std::endl;
    }

    try {

    Rhombus rhombus(30, 70, 110 );

    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

}


    
