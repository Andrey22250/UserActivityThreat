#pragma once
#include <iostream>

class IBehaviorAnalyzer
{
public:
    // Анализ действий
    virtual void analyzeUserActions() = 0;

    // Поиск токсичного контента
    virtual void detectToxicContent() = 0;

    // Идентификация вредоносного ПО
    virtual void identifyMaliciousSoftware() = 0;

    // Передача оценки угроз
    virtual void sendToThreatAssessment() = 0;
};

