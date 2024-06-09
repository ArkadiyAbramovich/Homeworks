#pragma once

#include <iostream>
#include <fstream>
#include "observer.hxx"

class FatalError : public Observer {
public:
    FatalError() = default;
    void onFatalError(const std::string message) override;
};