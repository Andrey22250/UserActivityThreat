#include "BehaviorAnalyzerAdapter.h"


BehaviorAnalyzerAdapter::BehaviorAnalyzerAdapter(IThirdBehaviorAnalysis* analyzer)
    : legacyAnalyzer(analyzer) {
}

void BehaviorAnalyzerAdapter::analyzeBehavior() {
    std::cout << "[Adapter] Конвертация вызова analyzeBehavior() в analyzeLegacy()\n";
}

void BehaviorAnalyzerAdapter::analyzeUserActions()  {
    std::cout << "Анализ пользовательских действий по алгоритму 2..." << std::endl;
}

void BehaviorAnalyzerAdapter::detectToxicContent() {
    std::cout << "Обнаружение токсичного контента по алгоритму 2..." << std::endl;
    detectedNewThreats++;
}

void BehaviorAnalyzerAdapter::identifyMaliciousSoftware() {
    std::cout << "Определение вредоносного ПО по алгоритму 2..." << std::endl;
}

void BehaviorAnalyzerAdapter::sendToThreatAssessment() {
    std::cout << "Отправка результатов анализа на оценку по алгоритму 2..." << std::endl;
    analysisLog = "Обнаружено угроз: " + std::to_string(detectedNewThreats);
}