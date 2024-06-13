#include <fstream>
#include "json.hxx"
#include "data.hxx"

void saveToAsJson(std::ofstream &file, const Json& json, const Data& data) {
    file << json.print(data);
}
