#include "State.h"
#include <iostream>

// InitialCollectionState
void InitialCollectionState::handle(AnalysisContext& context) {
    std::cout << "Сбор исходных пользовательских данных...\n";
    context.setState(std::make_shared<BehaviorAnalysisState>());
}

// BehaviorAnalysisState
void BehaviorAnalysisState::handle(AnalysisContext& context) {
    std::cout << "Анализ поведения пользователя...\n";
    context.setState(std::make_shared<ThreatAssessmentState>());
}

// ThreatAssessmentState
void ThreatAssessmentState::handle(AnalysisContext& context) {
    std::cout << "Оценка потенциальных угроз...\n";
    std::cout << "Анализ завершён.\n";
}

// AnalysisContext
AnalysisContext::AnalysisContext(std::shared_ptr<IAnalysisState> state)
    : currentState(state) {
}

void AnalysisContext::setState(std::shared_ptr<IAnalysisState> state) {
    currentState = state;
}

void AnalysisContext::process() {
    if (currentState) {
        std::cout << "[Текущее состояние: " << currentState->getName() << "]\n";
        currentState->handle(*this);
    }
}

std::string AnalysisContext::getStateName() const {
    return currentState ? currentState->getName() : "Пусто";
}