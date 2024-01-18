#include <iostream>
#include <set>

int main() {

    std::set<int, std::greater<>> m;
    int number_count = 0;
    int number = 0;

    std::cout << "Введите количество элементов для ввода: "; std::cin >> number_count;

    for (int i{}; i < number_count; i++) {

        std::cin >> number;
        m.insert(number);

    }

    std::cout << std::endl;

    for (const auto& el : m) {
        std::cout << el << std::endl;
    }

    return 0;
}