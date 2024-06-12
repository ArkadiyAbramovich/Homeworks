#include "warning_handler.hxx"
#include "unknown_handler.hxx"

void WarningHandler::Handle(const LogMessage& log_message) const noexcept {
    if(log_message.type() == Type::WARNING) {
        std::cout << log_message.message() << std::endl;
    } else {
        UnknownHandler unknown_handler;
        unknown_handler.Handle(log_message);
    }
}
