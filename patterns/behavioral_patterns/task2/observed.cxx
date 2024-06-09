#include "observed.hxx"

void Observed::warning(const std::string& message) const {
    for(auto observer : observers_) {
        if(auto observer_ptr = observer.lock()) {
            observer_ptr->onWarning(message);
        }
    }
}

void Observed::error(const std::string& message) const {
    for(auto observer : observers_) {
        if(auto observer_ptr = observer.lock()) {
            observer_ptr->onError(message);
        }
    }
}

void Observed::fatalError(const std::string& message) const {
    for(auto observer : observers_) {
        if(auto observer_ptr = observer.lock()) {
            observer_ptr->onFatalError(message);
        }
    }
}

void Observed::addObserver(std::weak_ptr<Observer> observer) {
    observers_.push_back(observer);
}
