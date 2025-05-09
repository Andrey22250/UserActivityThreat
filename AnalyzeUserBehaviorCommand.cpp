#include "AnalyzeUserBehaviorCommand.h"

AnalyzeUserBehaviorCommand::AnalyzeUserBehaviorCommand(const std::string& data)
    : userData(data) {
}

void AnalyzeUserBehaviorCommand::execute() {
    std::cout << "Анализ поведения пользователя: " << userData << std::endl;
}

void AnalyzeUserBehaviorCommand::undo() {
    std::cout << "Отмена анализа поведения пользователя: " << userData << std::endl;
}