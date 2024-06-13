#include <fstream>
#include "html.hxx"
#include "data.hxx"

void saveToAsHTML(std::ofstream &file, const Html& html, const Data& data) {
    file << html.print(data);
}
