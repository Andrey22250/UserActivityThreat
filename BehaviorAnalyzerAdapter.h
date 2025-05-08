// Класс-адаптер, который адаптирует интерфейс ThirdPartyAnalyzer под ожидаемый системой интерфейс IBehaviorAnalyzer
#pragma once
#include <string>
#include <iostream>
#include "IThirdBehaviorAnalysis.h"

// Конкретный адаптер
class BehaviorAnalyzerAdapter : public IThirdBehaviorAnalysis {
private:
    IThirdBehaviorAnalysis* legacyAnalyzer;
    int detectedNewThreats;       // Количество обнаруженных угроз
    std::string analysisLog;          // Лог анализа
public:
    BehaviorAnalyzerAdapter(IThirdBehaviorAnalysis* analyzer);
    void analyzeBehavior() override;
    virtual void analyzeUserActions();

    // Поиск токсичного контента
    virtual void detectToxicContent();

    // Идентификация вредоносного ПО
    virtual void identifyMaliciousSoftware();

    // Передача оценки угроз
    virtual void sendToThreatAssessment();
};