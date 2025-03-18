#include "BehaviorAnalysisModule.h"

int BehaviorAnalysisModule::detectedThreats = 0;

void BehaviorAnalysisModule::analyzeUserActions() {
    std::cout << "Анализ пользовательских действий..." << std::endl;
}

void BehaviorAnalysisModule::detectToxicContent() {
    std::cout << "Обнаружение токсичного контента..." << std::endl;
	detectedThreats++;
}

void BehaviorAnalysisModule::identifyMaliciousSoftware() {
    std::cout << "Определение вредоносного ПО..." << std::endl;
}

void BehaviorAnalysisModule::sendToThreatAssessment() {
    std::cout << "Отправка результатов анализа на оценку..." << std::endl;
	analysisLog = "Обнаружено угроз: " + std::to_string(detectedThreats);
}