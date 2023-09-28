cmake_minimum_required(VERSION 3.27)

project(leaver)

add_library(leave_lib SHARED Leaver.cpp Leaver.h)

add_executable(leaver main.cpp)

target_link_libraries(leaver leave_lib)








