cmake_minimum_required(VERSION 3.27)

project(shapes)

add_library(shapes_lib SHARED figure.h figure.cpp triangle.h triangle.cpp right_triangle.h right_triangle.cpp IsoscelesTriangle.h IsoscelesTriangle.cpp  EquilateralTriangle.h EquilateralTriangle.cpp
Quadrilateral.h Quadrilateral.cpp Rectangle.h Rectangle.cpp Square.h Square.cpp Parallelogram.h Parallelogram.cpp Rhombus.h Rhombus.cpp)

add_executable(shapes main.cpp)
	
target_link_libraries(shapes shapes_lib)

	

