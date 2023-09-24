#pragma once
#include <stdexcept>
#include <string>

class Exception : public std::domain_error {

    private:
    std::string message;

    public:
    Exception(const std::string& message);

    const char* what() const noexcept;


};