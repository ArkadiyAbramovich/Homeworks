cmake_minimum_required(VERSION 3.27)

project(leaver)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(leave_lib SHARED Leaver.cpp Leaver.h)

add_executable(leaver main.cpp)

target_link_libraries(leaver leave_lib)








