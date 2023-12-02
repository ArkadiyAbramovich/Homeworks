#include <iostream>
#include <vector>
#include <functional>
#include <tuple>
#include <variant>
#include <any>
#include <optional>
#include <cmath>

// void print_vec(const std::vector<int>& v) {
//     auto f = [](int x) {
//         std::cout << "element: " << x << "\n";
//     };

//     for(const auto& el: v) {
//         f(el);
//     }
// }

// void DoSmth(std::vector<int>& v, std::function<void(int)> func) {
//     for (auto x : v) {
//         func(x);
//     }
//     std::cout << std::endl;
// }

std::optional<double> MySqrt(double val) {
        if (val < 0) {
            return {};
        } else {
            return std::sqrt(val);
        }
    }

int main() {

    // std::vector<int> v{1,2,3,4,5,6,7,8,9};

    // DoSmth(v, [](int x) { std::cout << x << "\t";});

    // std::tuple<std::string str, char, int, double> test("arkadiy", 'a', 27, 9.2);

   std::variant<unsigned, std::string> age;

   age = "08.04.1996 ";

//    auto age_string = std::get<std::string>(age);
//    std::cout << age_string;

//    bool is_string = std::holds_alternative<std::string>(age);
   
//    auto try_string = std::get_if<std::string>(&age);

//    std::cout << is_string << "\n" << try_string << std::endl;

    double v = MySqrt(-5).value_or(0);
    double v1 = MySqrt(9).value_or(0);

    std::cout << v << "\n" << v1 << std::endl;

    std::any a = 5;

    std::cout << a.type().name() << " : " << std::any_cast<int>(a) << "\n";

    bool has_value = a.has_value();

    std::cout << has_value; 


    
}