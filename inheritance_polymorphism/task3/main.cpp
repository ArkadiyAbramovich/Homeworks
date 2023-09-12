#include <iostream>
#include <string>

class Figure {

protected:

std::string name;
int numberOfSides;

public:

Figure() {
    name = "Фигура";
    numberOfSides = 0;    
}

int getSides() {
    return numberOfSides;
}

std::string getName() {
    return name;
}

virtual bool checkFigure() {

    if(numberOfSides == 0) {
        std::cout << "Правильная" << std::endl;
        return true;
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }
    
}

virtual void printInfo() {
    std::cout << getName() << ":" << std::endl;
    checkFigure();
    std::cout << "Количество сторон: " << getSides() << std::endl;
}

void print(Figure* figure) {
    figure->printInfo();
}

};

class Triangle : public Figure {
    
    protected:
    
    
    int side_a, side_b, side_c;
    int angle_a, angle_b, angle_c;

    public:

    Triangle(int side_a, int side_b, int  side_c, int angle_a, int angle_b, int angle_c) {
        name = "Треугольник";
        numberOfSides = 3;
        this->side_a = side_a;
        this->side_b = side_b;
        this->side_c = side_c;
        this->angle_a = angle_a;
        this->angle_b = angle_b;
        this->angle_c = angle_c;
    }

    int getSide_a() {
        return side_a;
    }

    int getSide_b() {
        return side_b;
    }

    int getSide_c() {
        return side_c;
    }


    int getAngle_A() {
        return angle_a;
    }

    int getAngle_B() {
        return angle_b;
    }

    int getAngle_C() {
        return angle_c;
    }

    bool checkFigure() override {
        if((angle_a + angle_b +  angle_c) == 180 && Triangle::getSides() == 3) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }   
    }

    void printInfo() override {
        Figure::printInfo();
        std::cout << "Стороны: a = " << getSide_a() << " b = " << getSide_b() << " c = " << getSide_c() << std::endl;
        std::cout << "Углы: A = " << getAngle_A() << " B = " << getAngle_B() << " C = " << getAngle_C() << std::endl;
        std::cout << '\n';
    }

};

class RightTriangle : public Triangle {

    public:

    RightTriangle(int side_a, int side_b, int  side_c, int angle_a, int angle_b) : Triangle(side_a, side_b, side_c, angle_a, angle_b, 90) {
        Triangle::name = "Прямоугольный треугольник";
    }

    bool checkFigure() override {
    if(angle_c == 90 && (angle_a + angle_c) == 90) {
        std::cout << "Правильная" << std::endl;
        return true; 
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }   
}
};

class IsoscelesTriangle : public Triangle {

    public:

    IsoscelesTriangle(int side_a, int side_b, int angle_a, int angle_b) : Triangle(side_a, side_b, side_a, angle_a, angle_b, angle_a ) {
        Triangle::name = "Равнобедренный Треугольник";
    }

    bool checkFigure() override {
    if(angle_a == angle_c && side_a == side_c && (angle_a + angle_b + angle_c) == 180) {
        std::cout << "Правильная" << std::endl;
        return true; 
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }
}
};

class EquilateralTriangle : public Triangle {

    public:

    EquilateralTriangle(int side_a, int angle_a) : Triangle(side_a, side_a, side_a, angle_a, angle_a, angle_a) {
        Triangle::name = "Равносторонний Треугольник";
    }

    bool checkFigure() override {
    if((angle_a, angle_b, angle_c) == 60 && side_a == side_b && side_b == side_c && side_c == side_a) {
        std::cout << "Правильная" << std::endl;
        return true; 
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }
}
};

class Quadrilateral : public Figure {

    protected:
    
    int side_a, side_b, side_c, side_d;
    int angle_a, angle_b, angle_c, angle_d;

    public:

    Quadrilateral(int side_a, int side_b, int  side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d) {
        name = "Четырехугольник";
        numberOfSides = 4;
        this->side_a = side_a;
        this->side_b = side_b;
        this->side_c = side_c;
        this->side_d = side_d;
        this->angle_a = angle_a;
        this->angle_b = angle_b;
        this->angle_c = angle_c;
        this->angle_d = angle_d;
    }

    int getSide_a() {
        return side_a;
    }

    int getSide_b() {
        return side_b;
    }

    int getSide_c() {
        return side_c;
    }

    int getSide_d() {
        return side_d;
    }


    int getAngle_A() {
        return angle_a;
    }

    int getAngle_B() {
        return angle_b;
    }

    int getAngle_C() {
        return angle_c;
    }

    int getAngle_D() {
        return angle_d;
    }

    bool checkFigure() override {
    if((angle_a + angle_b + angle_c + angle_d) == 360 && Quadrilateral::getSides() == 4) {
        std::cout << "Правильная" << std::endl;
        return true; 
    } else {
        std::cout << "Неправильная" << std::endl;
        return false;
    }
}    

    void printInfo() override {
        Figure::printInfo();
        std::cout << "Стороны: a = " << getSide_a() << " b = " << getSide_b() << " c = " << getSide_c() << " d = " << getSide_d() << std::endl;
        std::cout << "Углы: A = " << getAngle_A() << " B = " << getAngle_B() << " C = " << getAngle_C() << " D = " << getAngle_D() << std::endl;
        std::cout << '\n';
    }
};

class Rectangle : public Quadrilateral {

    public:

    Rectangle(int side_a, int side_b, int angle_a) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_a, angle_a, angle_a) {
        Quadrilateral::name = "Прямоугольник";
    }

    bool checkFigure() override {
        if((angle_a, angle_b, angle_c, angle_d) == 90 && side_a == side_c && side_b == side_d && Quadrilateral::checkFigure() == true) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};

class Square : public Quadrilateral {

    public:

    Square(int side_a, int angle_a) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_a, angle_a, angle_a) {
        Quadrilateral::name = "Квадрат";
    }

    bool checkFigure() override {
        if((angle_a, angle_b, angle_c, angle_d) == 90 && side_a == side_b && side_b == side_c && side_c == side_d && side_d == side_a && Quadrilateral::checkFigure() == true) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};

class Parallelogram : public Quadrilateral {

    public:

    Parallelogram(int side_a, int side_b, int angle_a, int angle_b) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_b, angle_a, angle_b) {
        Quadrilateral::name = "Параллелограмм";
    }

    bool checkFigure() override {
        if(side_a == side_c && side_b == side_d && angle_a == angle_c && angle_b == angle_d && Quadrilateral::checkFigure() == true) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};

class Rhombus : public Quadrilateral {

    public:

    Rhombus(int side_a, int angle_a, int angle_b) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_b, angle_a, angle_b) {
        Quadrilateral::name = "Ромб";
    }

    bool checkFigure() override {
        if(angle_a == angle_c && angle_b == angle_d && side_a == side_b && side_b == side_c && side_c == side_d && side_d == side_a && Quadrilateral::checkFigure() == true) {
            std::cout << "Правильная" << std::endl;
            return true; 
        } else {
            std::cout << "Неправильная" << std::endl;
            return false;
        }
    }
};



int main(int, char**) {

    Figure figure;
    figure.printInfo();

    
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Figure* figTriangle = &triangle;
    figTriangle->print(figTriangle);

    RightTriangle rightTriangle(10, 20, 30, 50, 50);
    Figure* figRightTriangle = &rightTriangle;
    figRightTriangle->print(figRightTriangle);
    
    IsoscelesTriangle isoscelesTriangle(10,20,50,60);
    Figure* figIsoscelesTriangl = &isoscelesTriangle;
    figIsoscelesTriangl->print(figIsoscelesTriangl);
   
    EquilateralTriangle equilateralTriangle(30, 60);
    Figure* figEquilateralTriangle = &equilateralTriangle;
    figEquilateralTriangle->print(figEquilateralTriangle);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Figure* figQuadrilateral = &quadrilateral;
    figQuadrilateral->print(figQuadrilateral);

    Rectangle rectangle(10, 20, 90);
    Figure* figRectangle = &rectangle;
    figRectangle->print(figRectangle);

    Square square(20, 90);
    Figure* figSquare = &square;
    figSquare->print(figSquare);

    Parallelogram parallelogram(20, 30, 30, 40);
    Figure* figParallelogram = &parallelogram;
    figParallelogram->print(figParallelogram);

    Rhombus rhombus(30, 30, 40);
    Figure* figRhombus = &rhombus;
    figRhombus->print(figRhombus);
    
}