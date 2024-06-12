#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include "log_message.hxx"

class ErrorHandler {
public:
    ErrorHandler(const std::string& path_to_file);
    void Handle(const LogMessage& log_message) const;
private:
    std::string path_to_file_;
};