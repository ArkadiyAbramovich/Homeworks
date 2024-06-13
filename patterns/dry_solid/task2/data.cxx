#include "data.hxx"

Data::Data(const std::string& data, Format format) : data_(data), format_(format) {}

std::string Data::GetData() const noexcept {
    return data_;
}

Format Data::GetFormat() const noexcept {
    return format_;
}