#pragma once

#include <iostream>
#include "log_message.hxx"

class WarningHandler {
public:
    WarningHandler() = default;
    void Handle(const LogMessage& log_message) const noexcept;
};