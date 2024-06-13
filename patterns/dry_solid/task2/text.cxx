#include "text.hxx"

std::string Text::print(const Data& data) const {
    if(data.GetFormat() != Format::TEXT) {
        throw std::runtime_error("Invalid format!");
    }
    return data.GetData();
}