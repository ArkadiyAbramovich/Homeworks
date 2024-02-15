#include <thread>
#include <iostream>
#include <chrono>

int client_count = 0;

void IncreaseClientCount(int client) {
    for (int i{}; i < client; i++) {
        client_count++;
        std::cout << client_count << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void DecreaseClientCount() {
    while (client_count != 0) {
        client_count--;
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