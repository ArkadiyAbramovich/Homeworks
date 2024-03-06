#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
#include "progress_bar.hxx"
#include <vector>
#include <cassert>

int sum(int a, int b) {
    return a+b;
}

int main() {

// std::cout << '#' << std::setw(10) << " id " << std::setw(20) << " Progress Bar " << std::setw(10) << " Time " << std::endl;

assert(sum(3, 5) == 7);
                      
    return 0;
}