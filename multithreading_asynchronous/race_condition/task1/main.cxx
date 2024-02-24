#include <thread>
#include <iostream>
#include <chrono>
#include <atomic>


std::atomic<int> client_count{0};

void IncreaseClientCount(int client) {
    for (int i{}; i < client; i++) {
        // client_count.store(i + 1 , std::memory_order_acquire);
        // client_count.store(i + 1 , std::memory_order_consume);
        // client_count.store(i + 1 , std::memory_order_release);
        // client_count.store(i + 1 , std::memory_order_acq_rel);
        // client_count.store(i + 1 , std::memory_order_relaxed);
        client_count.store(i + 1 , std::memory_order_seq_cst);
        std::cout << client_count << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void DecreaseClientCount() {
    while (client_count != 0) {
        // client_count.store(client_count.load() - 1 , std::memory_order_acquire);
        // client_count.store(client_count.load() - 1 , std::memory_order_consume);
        // client_count.store(client_count.load() - 1 , std::memory_order_release);
        // client_count.store(client_count.load() - 1 , std::memory_order_acq_rel);
        // client_count.store(client_count.load() - 1 , std::memory_order_relaxed);
        client_count.store(client_count.load() - 1 , std::memory_order_seq_cst);
        std::cout << client_count << std::endl; 
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    if (client_count == 0) {
        std::cout << "All clients are prossesed!" << std::endl;
    }
}

int main() {

    std::thread th1(IncreaseClientCount, 6);
    std::thread th2(DecreaseClientCount);

    th1.join();
    th2.join();
    
    return 0;
}