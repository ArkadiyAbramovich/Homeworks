#pragma once
// #ifndef LEAVE_LIB_EXPORTS
//     #define LEAVE_LIB_API __declspec(dllexport)
// #else
//     #define LEAVE_LIB_API __declspec(dllimport)
// #endif

#include <string>

class Leaver {

public:
Leaver();

std::string Leave(std::string leave);
    
};