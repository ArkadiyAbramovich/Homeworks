#include "math.h"

enum Error {
    div_by_zero
};

double add(double x, double y) {

    return x + y;

}

double sub(double x, double y) {

    return x - y;

}

double mul(double x, double y) {

    return x * y;

}

double divi(double x, double y) {

    if(y == 0) {
        return Error::div_by_zero;

    }

    return x / y;

}

double pow(double x) {

    return x * x;

}