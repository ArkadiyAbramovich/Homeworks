cmake_minimum_required(VERSION 3.22)

project(refactor)

add_library(lib STATIC shape.hxx line.hxx line.cxx square.hxx square.cxx cube.hxx cube.cxx circle.hxx circle.cxx cylinder.hxx cylinder.cxx)

add_executable(refactor main.cxx)

target_link_libraries(refactor lib)