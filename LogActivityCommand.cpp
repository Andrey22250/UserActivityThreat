#include "LogActivityCommand.h"


LogActivityCommand::LogActivityCommand(const std::string& msg)
    : message(msg) {
}

void LogActivityCommand::execute() {
    std::cout << "Логирование активности: " << message << std::endl;
}

void LogActivityCommand::undo() {
    std::cout << "Удаление записи лога: " << message << std::endl;
}