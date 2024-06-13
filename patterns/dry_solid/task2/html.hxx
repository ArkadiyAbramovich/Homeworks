#pragma once

#include <string>
#include <stdexcept>
#include "print.hxx"
#include "format_type.hxx"
#include "data.hxx"

class Html : public Print {
public:
    Html() = default;
    std::string print(const Data& data) const override;
};