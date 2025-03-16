#pragma once
#include <string>

class IControlCenter
{
    // Настройка параметров
    virtual void configureSystemParameters() = 0;

    // Мониторинг состояния
    virtual std::string monitorModuleStatus() = 0;

    // Корректировка уровней угроз
    virtual void adjustThreatLevels() = 0;

    // Генерация системного отчёта
    virtual std::string generateSystemReport() = 0;
};

