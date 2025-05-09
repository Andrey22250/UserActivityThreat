#include "State.h"
#include <iostream>

// InitialCollectionState
void InitialCollectionState::handle(AnalysisContext& context) {
    std::cout << "���� �������� ���������������� ������...\n";
    context.setState(std::make_shared<BehaviorAnalysisState>());
}

// BehaviorAnalysisState
void BehaviorAnalysisState::handle(AnalysisContext& context) {
    std::cout << "������ ��������� ������������...\n";
    context.setState(std::make_shared<ThreatAssessmentState>());
}

// ThreatAssessmentState
void ThreatAssessmentState::handle(AnalysisContext& context) {
    std::cout << "������ ������������� �����...\n";
    std::cout << "������ ��������.\n";
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
        std::cout << "[������� ���������: " << currentState->getName() << "]\n";
        currentState->handle(*this);
    }
}

std::string AnalysisContext::getStateName() const {
    return currentState ? currentState->getName() : "�����";
}