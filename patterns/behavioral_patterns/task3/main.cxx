#include "log_message.hxx"
#include "fatal_error_handler.hxx"
#include "error_handler.hxx"
#include "warning_handler.hxx"
#include "unknown_handler.hxx"

int main(int argc, char** argv) {

    try {
        
        LogMessage log_message(Type::ERROR, "Fattal Error!");

        FatalErrorHandler fatal_error;
        ErrorHandler error("log_to_file.txt");
        WarningHandler warning;
        UnknownHandler unknown;

        error.Handle(log_message);

    } catch(const std::runtime_error& ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}