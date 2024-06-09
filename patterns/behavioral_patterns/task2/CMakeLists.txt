cmake_minimum_required(VERSION 3.22)
project(observer)
add_executable(observer main.cxx observed.cxx warning.cxx error.cxx fatal_error.cxx)