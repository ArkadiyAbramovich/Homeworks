#include "unknown_handler.hxx"
#include "fatal_error_handler.hxx"

void UnknownHandler::Handle(const LogMessage& log_message) const {
    if(log_message.type() == Type::UNKNOWN_ERROR) {
        throw std::runtime_error(log_message.message());
        std::exit(0);
    }
}