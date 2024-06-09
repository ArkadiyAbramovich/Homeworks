#include "error.hxx"

void Error::onError(const std::string message) {

    std::ofstream log_to_file("file.txt");

        if(!log_to_file) {
            std::cout << "Failed to open file" << std::endl;
        } else {
            std::cout << "File is opened" << std::endl;
        }
        
    log_to_file << message << std::endl;
}