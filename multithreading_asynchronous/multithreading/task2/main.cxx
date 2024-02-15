#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <random>
#include <algorithm>
#include <iomanip>

void SumOfVector(std::vector<int> vec_1, std::vector<int> vec_2, size_t start, size_t end) {

    long int result = 0;

    for (int i = start; i < end; i++) {
        result += vec_1[i] + vec_2[i];
    }

} 

void Gen(std::vector<int>& vec, int size) {
    std::mt19937 gen;
    std::uniform_int_distribution<int> dist(0, size);
    std::generate(vec.begin(), vec.end(), [&](){return dist(gen);});
}

auto CountTime1Thread(std::vector<int> vec_1, std::vector<int> vec_2, int start, int end) {
    auto start_1 = std::chrono::steady_clock::now();
    std::thread th_1(SumOfVector, vec_1, vec_2, start, end);
    th_1.join();
    auto end_1 = std::chrono::steady_clock::now();
    auto diff_1 = std::chrono::duration<double>(end_1 - start_1);
    return diff_1.count();
}

auto CountTime2Thread(std::vector<int> vec_1, std::vector<int> vec_2, int number_thread, int start, int end) {

    std::vector<std::thread> th_v;
    int start_ = start;
    int end_ = end;
    auto start_t = std::chrono::steady_clock::now();

    switch (end_) {
        case 500: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 500;
                end_ += 500;   
            }
            break;
        }

        case 5000: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 5000;
                end_ += 5000;     
            }
        }   break;

        case 50000: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 50000;
                end_ += 50000;
            }
        }   break;

        case 500000: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 500000;
                end_ += 500000;
            }
        }   break;
    }

    for (auto& el : th_v) {

        el.join();

    }
    auto end_t = std::chrono::steady_clock::now();
    auto diff = std::chrono::duration<double>(end_t - start_t);
    return diff.count();
}

auto CountTime4Thread(std::vector<int> vec_1, std::vector<int> vec_2, int number_thread, int start, int end) {
    std::vector<std::thread> th_v;
    int start_ = start;
    int end_ = end;
    auto start_t = std::chrono::steady_clock::now();

    switch (end_) {
        case 250: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 250;
                end_ += 250;   
            }
            break;
        }

        case 2500: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 2500;
                end_ += 2500;     
            }
        }   break;

        case 25000: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 25000;
                end_ += 25000;
            }
        }   break;

        case 250000: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 250000;
                end_ += 250000;
            }
        }   break;
    }

    for (auto& el : th_v) {

        el.join();

    }
    auto end_t = std::chrono::steady_clock::now();
    auto diff = std::chrono::duration<double>(end_t - start_t);
    return diff.count();
}

auto CountTime8Thread(std::vector<int> vec_1, std::vector<int> vec_2, int number_thread, int start, int end) {
    std::vector<std::thread> th_v;
    int start_ = start;
    int end_ = end;
    auto start_t = std::chrono::steady_clock::now();

    switch (end_) {
        case 125: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 125;
                end_ += 125;   
            }
            break;
        }

        case 1250: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 1250;
                end_ += 1250;     
            }
        }   break;

        case 12500: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 12500;
                end_ += 12500;
            }
        }   break;

        case 125000: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 125000;
                end_ += 125000;
            }
        }   break;
    }

    for (auto& el : th_v) {

        el.join();

    }
    auto end_t = std::chrono::steady_clock::now();
    auto diff = std::chrono::duration<double>(end_t - start_t);
    return diff.count();
}

auto CountTime16Thread(std::vector<int> vec_1, std::vector<int> vec_2, int number_thread, int start, int end) {
    std::vector<std::thread> th_v;
    int start_ = start;
    int end_ = end;
    auto start_t = std::chrono::steady_clock::now();

    switch (end_) {
        case 66: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 66;
                end_ += 66;   
            }
            th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, 990, 1000));
            break;
        }

        case 625: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 625;
                end_ += 625;     
            }
        }   break;

        case 6250: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 6250;
                end_ += 6250;
            }
        }   break;

        case 62500: {
            for (int i{}; i < number_thread; i++) {
                th_v.push_back(std::thread(SumOfVector, vec_1, vec_2, start_, end_));
                start_ += 62500;
                end_ += 62500;
            }
        }   break;
    }

    for (auto& el : th_v) {

        el.join();

    }
    auto end_t = std::chrono::steady_clock::now();
    auto diff = std::chrono::duration<double>(end_t - start_t);
    return diff.count();
}

constexpr const size_t size_1 = 1000;
constexpr const size_t size_2 = 10000;
constexpr const size_t size_3 = 100000;
constexpr const size_t size_4 = 1000000;

int main() {
  
    std::vector<int> vec_1(size_1);
    std::vector<int> vec_2(size_2);
    std::vector<int> vec_3(size_3);
    std::vector<int> vec_4(size_4);

    Gen(vec_1, size_1);
    Gen(vec_2, size_2);
    Gen(vec_3, size_3);
    Gen(vec_4, size_4);

    std::cout << "Number of hardware cores - " << std::thread::hardware_concurrency() <<  std::endl;
    std::cout << std::endl;
    std::cout << std::setw(22) << size_1 << std::setw(22) << size_2 << std::setw(22) << size_3 << std::setw(20) << size_4 << std::endl;
    std::cout << "1 thread "   << std::setw(16)  << CountTime1Thread(vec_1, vec_1, 0, 1000) << "s" << std::right << std::setw(20) << CountTime1Thread(vec_2, vec_2, 0, 10000) << "s" << std::right << std::setw(20) << CountTime1Thread(vec_3, vec_3, 0, 100000) << "s" << std::right << std::setw(20) << CountTime1Thread(vec_4, vec_4, 0, 1000000) << "s" << std::endl;
    std::cout << "2 threads "  << std::setw(15)  << CountTime2Thread(vec_1, vec_1, 2, 0, 500) << "s" << std::right << std::setw(20) << CountTime2Thread(vec_2, vec_2, 2, 0, 5000) << "s" << std::right << std::setw(20) << CountTime2Thread(vec_3, vec_3, 2, 0, 50000) << "s" << std::right << std::setw(20) << CountTime2Thread(vec_4, vec_4, 2, 0, 500000) << "s" << std::endl;
    std::cout << "4 threads "  << std::setw(15)  << CountTime4Thread(vec_1, vec_1, 4, 0, 250) << "s" << std::right << std::setw(20) << CountTime4Thread(vec_2, vec_2, 4, 0, 2500) << "s" << std::right << std::setw(20) << CountTime4Thread(vec_3, vec_3, 4, 0, 25000) << "s" << std::right << std::setw(20) << CountTime4Thread(vec_4, vec_4, 4, 0, 250000) << "s" << std::endl;
    std::cout << "8 threads "  << std::setw(15)  << CountTime8Thread(vec_1, vec_1, 8, 0, 125) << "s" << std::right << std::setw(20) << CountTime8Thread(vec_2, vec_2, 8, 0, 1250) << "s" << std::right << std::setw(20) << CountTime8Thread(vec_3, vec_3, 8, 0, 12500) << "s" << std::right << std::setw(20) << CountTime8Thread(vec_4, vec_4, 8, 0, 125000) << "s" << std::endl;
    std::cout << "16 threads " << std::setw(14)  << CountTime16Thread(vec_1, vec_1, 15, 0, 66) << "s" << std::right << std::setw(20) << CountTime16Thread(vec_2, vec_2, 16, 0, 625) << "s" << std::right << std::setw(20) << CountTime16Thread(vec_3, vec_3, 16, 0, 6250) << "s" << std::right << std::setw(20) << CountTime16Thread(vec_4, vec_4, 16, 0, 62500) << "s" << std::endl;
    
    return 0;
}