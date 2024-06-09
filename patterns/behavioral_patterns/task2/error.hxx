#pragma once

#include <fstream>
#include <iostream>
#include "observer.hxx"

class Error : public Observer {
public:
    Error() = default;
    void onError(const std::string message) override;
};