#include "Exception.h"
#include <stdexcept>
#include <string>

    Exception::Exception(const std::string& message) : std::domain_error(message) {
        // this->message = message;
    }
    

    const char* Exception::what() const noexcept {
        return message.c_str();
    }

