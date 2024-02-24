#include "data.hxx"

void swap_1(Data& d_1, Data& d_2) {
    std::lock(d_1.mx_, d_2.mx_);
    Data tmp;
    tmp.a_ = std::move(d_1.a_);
    tmp.b_ = std::move(d_2.b_);

    d_1.a_ = std::move(d_2.a_);
    d_1.b_ = std::move(d_2.b_);

    d_2.a_ = std::move(tmp.a_);
    d_2.b_ = std::move(tmp.b_);
    
}

void swap_2(Data& d_1, Data& d_2) {
    std::scoped_lock sl(d_1.mx_, d_2.mx_);
    Data tmp;
    tmp.a_ = std::move(d_1.a_);
    tmp.b_ = std::move(d_2.b_);

    d_1.a_ = std::move(d_2.a_);
    d_1.b_ = std::move(d_2.b_);

    d_2.a_ = std::move(tmp.a_);
    d_2.b_ = std::move(tmp.b_);
}

void swap_3(Data& d_1, Data& d_2) {
    std::unique_lock ul_1(d_1.mx_);
    std::unique_lock ul_2(d_2.mx_);
    Data tmp;
    tmp.a_ = std::move(d_1.a_);
    tmp.b_ = std::move(d_2.b_);

    d_1.a_ = std::move(d_2.a_);
    d_1.b_ = std::move(d_2.b_);

    d_2.a_ = std::move(tmp.a_);
    d_2.b_ = std::move(tmp.b_);
}

int main() {

    Data d_1{2, 4};
    Data d_2{6, 8};

    std::thread th_1(swap_1, std::ref(d_1), std::ref(d_2));
    std::thread th_2(swap_2, std::ref(d_1), std::ref(d_1));
    std::thread th_3(swap_3, std::ref(d_1), std::ref(d_1));

    // th_1.join();
    th_2.join();
    th_3.join();

    return 0;
}