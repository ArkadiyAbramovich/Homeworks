#pragma once
#include <string>
#include <iostream>

class BigInteger {

    private:
        std::string str_;
    public:
        BigInteger(std::string str);

        BigInteger(BigInteger&& other) noexcept;

        BigInteger& operator=(BigInteger&& other) noexcept;

        BigInteger operator+(const BigInteger& other);

        BigInteger operator*(const BigInteger& other);

        friend std::ostream& operator<<(std::ostream& out, BigInteger& other);
};