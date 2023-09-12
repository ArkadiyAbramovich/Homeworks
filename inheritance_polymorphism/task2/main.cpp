#include <iostream>
#include <string>

class Figure {

protected:

std::string name;

public:

std::string getName() {
    return name;
}

virtual void printInfo() {
    
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

    void printInfo() override {
        std::cout << getName() << ":" << std::endl;
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
};

class IsoscelesTriangle : public Triangle {

    public:

    IsoscelesTriangle(int side_a, int side_b, int angle_a, int angle_b) : Triangle(side_a, side_b, side_a, angle_a, angle_b, angle_a ) {
        Triangle::name = "Равнобедренный Треугольник";
    }
};

class EquilateralTriangle : public Triangle {

    public:

    EquilateralTriangle(int side_a, int angle_a) : Triangle(side_a, side_a, side_a, angle_a, angle_a, angle_a) {
        Triangle::name = "Равносторонний Треугольник";
    }
};

class Quadrilateral : public Figure {

    protected:
    
    int side_a, side_b, side_c, side_d;
    int angle_a, angle_b, angle_c, angle_d;

    public:

    Quadrilateral(int side_a, int side_b, int  side_c, int side_d, int angle_a, int angle_b, int angle_c, int angle_d) {
        name = "Четырехугольник";
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

    void printInfo() override {
        std::cout << getName() << ":" << std::endl;
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
};

class Square : public Quadrilateral {

    public:

    Square(int side_a, int angle_a) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_a, angle_a, angle_a) {
        Quadrilateral::name = "Квадрат";
    }
};

class Parallelogram : public Quadrilateral {

    public:

    Parallelogram(int side_a, int side_b, int angle_a, int angle_b) : Quadrilateral(side_a, side_b, side_a, side_b, angle_a, angle_b, angle_a, angle_b) {
        Quadrilateral::name = "Параллелограмм";
    }
};

class Rhombus : public Quadrilateral {

    public:

    Rhombus(int side_a, int angle_a, int angle_b) : Quadrilateral(side_a, side_a, side_a, side_a, angle_a, angle_b, angle_a, angle_b) {
        Quadrilateral::name = "Ромб";
    }
};



int main(int, char**) {
    
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Figure* figTriangle = &triangle;
    figTriangle->print(figTriangle);

    RightTriangle rightTriangle(10, 20, 30, 50, 60);
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