#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {

    private:
    
    double num1, num2;

    public:

    double add();

    double subtract_1_2();

    double subtract_2_1();

    double multiplay();

    double divide_1_2();

    double divide_2_1();

    bool set_num1(double num1);

    bool set_num2(double num2);

};

#endif