#include <fstream>

#include "data.hxx"
#include "format_type.hxx"
#include "html.hxx"
#include "saveToAsHtml.hxx"

int main() {

    Data data("hello from html", Format::HTML);

    Html html;

    std::ofstream out("html.txt");

    saveToAsHTML(out, html, data);

    return 0;
}