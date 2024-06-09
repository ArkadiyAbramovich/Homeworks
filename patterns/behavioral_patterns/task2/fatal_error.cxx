#include "fatal_error.hxx"

void FatalError::onFatalError(const std::string message) {

    std::cout << message << std::endl;

    std::ofstream log_to_file("file.txt");
    
        if(!log_to_file) {
            std::cout << "Failed to open file" << std::endl;
        } else {
            std::cout << "File is opened" << std::endl;
        }

    log_to_file << message << std::endl;
}