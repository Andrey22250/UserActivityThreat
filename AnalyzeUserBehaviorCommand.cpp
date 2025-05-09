#include "AnalyzeUserBehaviorCommand.h"

AnalyzeUserBehaviorCommand::AnalyzeUserBehaviorCommand(const std::string& data)
    : userData(data) {
}

void AnalyzeUserBehaviorCommand::execute() {
    std::cout << "������ ��������� ������������: " << userData << std::endl;
}

void AnalyzeUserBehaviorCommand::undo() {
    std::cout << "������ ������� ��������� ������������: " << userData << std::endl;
}