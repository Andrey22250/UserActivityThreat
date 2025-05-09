#include "LogActivityCommand.h"


LogActivityCommand::LogActivityCommand(const std::string& msg)
    : message(msg) {
}

void LogActivityCommand::execute() {
    std::cout << "����������� ����������: " << message << std::endl;
}

void LogActivityCommand::undo() {
    std::cout << "�������� ������ ����: " << message << std::endl;
}