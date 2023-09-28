#include "Leaver.h"
#include <string>
#include <iostream>

Leaver::Leaver() {
}

std::string Leaver::Leave(std::string leave) {
    std::string str = "До свидания, " + leave + "!";
    return str;
    
}