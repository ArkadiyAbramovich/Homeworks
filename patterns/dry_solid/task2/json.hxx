#pragma once

#include <string>
#include <stdexcept>
#include "print.hxx"
#include "format_type.hxx"
#include "data.hxx"

class Json : public Print {
public:
    Json() = default;
    std::string print(const Data& data) const override;
};