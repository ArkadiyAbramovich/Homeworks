#include "log_message.hxx"

LogMessage::LogMessage(Type type, const std::string& message) : message_(message), type_(type) {}

Type LogMessage::type() const {
    return type_;
}

const std::string& LogMessage::message() const{
    return message_;
}
