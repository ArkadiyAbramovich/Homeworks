#pragma once

#include <string>
#include <iostream>

class Figure {

protected:

std::string name;
int numberOfSides;

public:

Figure();

int getSides();

std::string getName();

virtual bool checkFigure();

virtual void printInfo();

void print(Figure*);

};