#include <mutex>
#include <thread>          

class Data {
    public:
        Data(int a, int b);

        Data();

        std::mutex mx_;

        int a_;
        int b_;     
};  