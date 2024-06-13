#pragma once

#include <string>
#include "data.hxx"

class Print {
public:
    Print() = default;
    ~Print() = default;
    virtual std::string print(const Data& data) const = 0;
};