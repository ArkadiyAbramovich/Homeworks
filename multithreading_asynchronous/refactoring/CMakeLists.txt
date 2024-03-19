cmake_minimum_required(VERSION 3.22)

project(shape_test)

add_subdirectory(googletest-1.14.0)

add_executable(shape_test shape_test.cxx)

target_link_libraries(shape_test GTest::gtest_main)
