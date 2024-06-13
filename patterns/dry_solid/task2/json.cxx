#include "json.hxx"

std::string Json::print(const Data& data) const {
    if (data.GetFormat() != Format::JSON) {
        throw std::runtime_error("Invalid format!");
    }
    return "{ \"data\": \"" + data.GetData() + "\"}";
}
 