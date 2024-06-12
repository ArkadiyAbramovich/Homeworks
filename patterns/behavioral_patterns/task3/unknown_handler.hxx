#pragma once

#include <stdexcept>
#include "log_message.hxx"

class UnknownHandler {
public:
    void Handle(const LogMessage& log_message) const;
};