cmake_minimum_required(VERSION 3.22)

project(test_ LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Network)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql)



add_executable(test_
  main.cpp
)

target_link_libraries(test_ PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(test_ PRIVATE Qt${QT_VERSION_MAJOR}::Network)
target_link_libraries(test_ PRIVATE Qt${QT_VERSION_MAJOR}::Sql)
