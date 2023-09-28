#include "figure.h"
#include <string>
#include <iostream>

Figure::Figure() {
    name = "Фигура";
    numberOfSides = 0;    
}

int Figure::getSides() {
    return numberOfSides;
}

std::string Figure::getName() {
    return name;
}

 bool Figure::checkFigure() {

    if(numberOfSides == 0) {
        std::cout << "Правильная" << std::endl;
        return true;
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }
    
}

void Figure::printInfo() {
    std::cout << getName() << ":" << std::endl;
    checkFigure();
    std::cout << "Количество сторон: " << getSides() << std::endl;
}

void Figure::print(Figure* figure) {
    figure->printInfo();
}

