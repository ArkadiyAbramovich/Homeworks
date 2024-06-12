#pragma once

#include <stdexcept>
#include <system_error>
#include "log_message.hxx"

class FatalErrorHandler {
public:
    FatalErrorHandler() = default;
    void Handle(const LogMessage& log_message) const;
};