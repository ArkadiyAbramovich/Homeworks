#include "error_handler.hxx"
#include "warning_handler.hxx"

ErrorHandler::ErrorHandler(const std::string& path_to_file) : path_to_file_(path_to_file) {}

void ErrorHandler::Handle(const LogMessage& log_message) const {
    if(log_message.type() == Type::ERROR) {
        std::ofstream wr_to_file(path_to_file_);
        if(!wr_to_file) {
            std::cout << "Can't open file!" << std::endl;
        } else {
            std::cout << "File opened!" << std::endl;
        }

        wr_to_file << log_message.message() << std::endl;

    } else {
        WarningHandler warning_handler;
        warning_handler.Handle(log_message);
    }
}