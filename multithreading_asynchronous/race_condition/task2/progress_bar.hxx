#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>

int ProgressBar(int time, char symbol)
{

    std::string progress_bar;
    const double progress_level = 2.0;

    for (double percentage = 0; percentage <= 100; percentage += progress_level)
    {
        progress_bar.insert(0, 1, symbol);
        std::cout << '\r' << progress_bar;
        std::this_thread::sleep_for(std::chrono::milliseconds(time));       
    }
    std::cout << "\n";
    return 1;
}