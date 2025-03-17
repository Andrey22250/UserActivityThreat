#pragma once
#include <string>

class IThreatAssessment
{
    // Оценка уровня угрозы
    virtual void evaluateThreatLevel() = 0;

    // Применение моделей
    virtual void applyPredefinedModels() = 0;

    // Генерация отчёта
    virtual void generateThreatReport() = 0;

    // Передача в систему реагирования
    virtual void sendToResponseSystem() = 0;
};

