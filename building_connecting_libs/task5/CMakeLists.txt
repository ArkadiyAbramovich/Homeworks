cmake_minimum_required(VERSION 3.27)

project(shapes)

add_library(figure_lib SHARED figure.h figure.cpp )
add_library(triangle_lib SHARED triangle.h triangle.cpp )
add_library(right_triangle_lib SHARED right_triangle.h right_triangle.cpp )
add_library(isosceles_triangle_lib SHARED IsoscelesTriangle.h IsoscelesTriangle.cpp)
add_library(equilateral_triangle_lib SHARED EquilateralTriangle.h EquilateralTriangle.cpp )
add_library(quadrilateral_lib SHARED Quadrilateral.h Quadrilateral.cpp )
add_library(rectangle_lib SHARED Rectangle.h Rectangle.cpp)
add_library(square_lib SHARED Square.h Square.cpp )
add_library(parallelogram_lib SHARED Parallelogram.h Parallelogram.cpp )
add_library(rhombus_lib SHARED Rhombus.h Rhombus.cpp)

add_executable(shapes main.cpp)
	
target_link_libraries(shapes figure_lib triangle_lib right_triangle_lib isosceles_triangle_lib equilateral_triangle_lib quadrilateral_lib rectangle_lib square_lib parallelogram_lib rhombus_lib)

	

