#pragma once

#include <string>
#include <memory>
#include <vector>
#include "observer.hxx"
#include "observer_errors.hxx"

class Observed {
public:
    Observed() = default;
    void warning(const std::string& message) const;
    void error(const std::string& message) const;
    void fatalError(const std::string& message) const;
    void addObserver(std::weak_ptr<Observer> observer);

private:
    std::vector<std::weak_ptr<Observer>> observers_;
};