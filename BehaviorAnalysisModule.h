// Анализирует активность пользователей, выявляет токсичные комментарии, угрозы, пропаганду и вредоносные программы
#pragma once
#include <string>
#include "IBehaviorAnalyzer.h"

class BehaviorAnalysisModule : public IBehaviorAnalyzer
{
private:
    static int detectedThreats;       // Количество обнаруженных угроз
    std::string analysisLog;          // Лог анализа
public:
    void analyzeUserActions() override;
    void detectToxicContent() override;
    void identifyMaliciousSoftware() override;
    void sendToThreatAssessment() override;
};

