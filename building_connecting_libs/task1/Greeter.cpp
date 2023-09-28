#include "Greeter.h"
#include <string>
#include <iostream>

Greeter::Greeter() {
}

std::string Greeter::Greet(std::string greet) {
    std::string str = "Здравствуйте, " + greet + "!";
    return str;
}