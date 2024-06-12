#pragma once

#include <string>
#include "type_error.hxx"

class LogMessage {
public:
    LogMessage(Type type, const std::string& message);
    Type type() const;
    const std::string& message() const;

private:
    Type type_;
    std::string message_;
};