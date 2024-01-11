#pragma once
#include <vector>

class Functor {

    private:
    int sum_ = 0;
    int count_ = 0;

    public:
    Functor();

    void operator()(std::vector<int> vec);

    int GetSum();

    int GetCount();

};