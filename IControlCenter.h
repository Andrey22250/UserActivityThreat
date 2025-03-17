#pragma once
#include <iostream>

class IControlCenter
{
    // Настройка параметров
    virtual void configureSystemParameters() = 0;

    // Мониторинг состояния
    virtual void monitorModuleStatus() = 0;

    // Корректировка уровней угроз
    virtual void adjustThreatLevels() = 0;

    // Генерация системного отчёта
    virtual void generateSystemReport() = 0;
};