#pragma once

#include <string>
#include <stdexcept>
#include "print.hxx"
#include "format_type.hxx"
#include "data.hxx"

class Text : public Print {
public:
    Text() = default;
    std::string print(const Data& data) const override;
};