#pragma once
#include <array>
#include <future>
#include <chrono>
#include <thread>

void SortSelect(std::array<int, 5>& arr, std::promise<std::array<int, 5>> prom);