#include <iostream>
#include <string>

class Figure {

    private:
    std::string nameOfFigure;
    int numberOfSides;

    protected:
    Figure(std::string nameOfFigure, int numberOfSides) {
        this->nameOfFigure = nameOfFigure;
        this->numberOfSides = numberOfSides;
    }

    public:
    Figure() : Figure("Фигура", 0) {
    }

    std::string getNameOfFigure() {
        return nameOfFigure;
    }
    

    int getNumberOfSides() {
        return numberOfSides;
    }
};

class Triangle : public Figure {
    public:
    Triangle() : Figure("Треугольник", 3){
        
    }
  
};

class Quadrilateral : public Figure {
    public:
    Quadrilateral() : Figure("Четырехугольник", 4) {
    
    }  
};

int main(int, char**) {

    Figure figure;
    Triangle triangle;
    Quadrilateral quadrilateral;
    std::cout << "Количество сторон: " << std::endl;
    std::cout << figure.getNameOfFigure() << ": " << figure.getNumberOfSides() << std::endl;
    std::cout << triangle.getNameOfFigure() << ": " << triangle.getNumberOfSides() << std::endl;
    std::cout << quadrilateral.getNameOfFigure() << ": " << quadrilateral.getNumberOfSides() << std::endl;
}