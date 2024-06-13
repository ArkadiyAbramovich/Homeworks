#include <fstream>
#include "text.hxx"
#include "data.hxx"

void saveToAsHTML(std::ofstream &file, const Text& text, const Data& data) {
    file << text.print(data);
}
