#include "observed.hxx"
#include "observer_errors.hxx"

int main() {

    std::weak_ptr<Observer> observer;
    Observed observed;
    observed.addObserver(observer);
    observed.warning("Warning!");
    return 0;
}