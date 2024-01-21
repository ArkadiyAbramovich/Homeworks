#include "template_print_value.hpp"
#include <set>
#include <vector>
#include <list>
#include <string>



int main(int argc, char** argv) {

    std::set<std::string> test_set{"one", "two", "three", "four"};
    tmp::PrintContainer(test_set);

    std::cout << std::endl;

    std::list<std::string> test_list{"one", "two", "three", "four"};
    tmp::PrintContainer(test_list);

    std::cout << std::endl;

    std::vector<std::string> test_vector{"one", "two", "three", "four"};
    tmp::PrintContainer(test_vector);

    return 0;
}