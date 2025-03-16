#pragma once
class IBehaviorAnalyzer
{
    // Анализ действий
    virtual void analyzeUserActions() = 0;

    // Поиск токсичного контента
    virtual bool detectToxicContent() = 0;

    // Идентификация вредоносного ПО
    virtual bool identifyMaliciousSoftware() = 0;

    // Передача оценки угроз
    virtual void sendToThreatAssessment() = 0;
};

