#pragma once

#include <string>
#include "format_type.hxx"

class Data {
public:
    Data(const std::string& data, Format format);
    std::string GetData() const noexcept;
    Format GetFormat() const noexcept;
private:
    std::string data_;
    Format format_;
};