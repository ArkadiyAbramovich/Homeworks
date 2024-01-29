#include "big_integer.hpp"
#include <utility>
#include <string>
#include <iostream>

        BigInteger::BigInteger(std::string str) : str_{str} {}

        BigInteger::BigInteger(BigInteger&& other) noexcept {
            str_ = other.str_;
            other.str_ = " ";
        }

        BigInteger& BigInteger::operator=(BigInteger&& other) noexcept {
            std::swap(str_, other.str_);
            return *this;
        }

        BigInteger BigInteger::operator+(const BigInteger& other) {
            auto number_1 = std::stoll(str_);
            auto number_2 = std::stoll(other.str_);
            return BigInteger(std::to_string(number_1 + number_2));
        }

        BigInteger BigInteger::operator*(const BigInteger& other) {
            auto number_1 = std::stoll(str_);
            auto number_2 = std::stoll(other.str_);
            return BigInteger(std::to_string(number_1 * number_2));
        }

        std::ostream& operator<<(std::ostream& out, BigInteger& other ) {
            out << other.str_;
            return out;
        }
        