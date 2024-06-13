#include "html.hxx"

std::string Html::print(const Data& data) const {
    if (data.GetFormat() != Format::HTML) {
        throw std::runtime_error("Invalid format!");
    }
    return "<html>" + data.GetData() + "<html/>";
}
