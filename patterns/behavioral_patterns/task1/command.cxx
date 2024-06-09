#include <string>
#include <iostream>
#include <fstream>
#include <filesystem>

class LogCommand {
public:
    virtual ~LogCommand() = default;
    virtual void print(const std::string& message) = 0;
};

class LogToConsole : public LogCommand {
public:
    LogToConsole() = default;
    void print(const std::string& message) override {
        std::cout << message << std::endl;
    }
};

class LogToFile : public LogCommand {
public:
    LogToFile() = default;
    void print(const std::string& message) override {
        std::ofstream of("out.txt");
            if(!of) {
                std::cout << "Failed open file out.txt" << std::endl;
            } else {
                std::cout << "File out.txt is opened" << std::endl;
            }
        of << message << std::endl;
    }
};

void print(LogCommand& lc) {
    lc.print("Log to console");
}

int main() {

    LogToConsole ltc;
    print(ltc);

    LogToFile ltf;
    print(ltf);

    return 0;

}