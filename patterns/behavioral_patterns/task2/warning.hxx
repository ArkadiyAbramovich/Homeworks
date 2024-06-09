#pragma once

#include <iostream>
#include "observer.hxx"

class Warning : public Observer {
public:
    Warning() = default;
    void onWarning(const std::string message) override;
};