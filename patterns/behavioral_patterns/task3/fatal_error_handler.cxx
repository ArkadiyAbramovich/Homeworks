#include "fatal_error_handler.hxx"
#include "error_handler.hxx"

void FatalErrorHandler::Handle(const LogMessage& log_message) const {
    if(log_message.type() == Type::FATAL_ERROR) {
       throw std::runtime_error(log_message.message());
       std::exit(0);
    } else {
        ErrorHandler error_handler("log_file.txt");
        error_handler.Handle(log_message);
    }
}