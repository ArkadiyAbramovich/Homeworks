cmake_minimum_required(VERSION 3.27)

project(greeter)

set(SOURCE_LIB Greeter.h Greeter.cpp)

add_library(greet_lib STATIC Greeter.h Greeter.cpp)

add_executable(greeter main.cpp)

target_link_libraries(greeter greet_lib)