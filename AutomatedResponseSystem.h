// Автоматизированная система реагирования на инциденты
#pragma once
#include <iostream>
#include "IResponseSystem.h"

class AutomatedResponseSystem : public IResponseSystem
{
private:
    std::string responseLog;          // Лог действий системы
    static int alertCount;            // Количество сработавших уведомлений
public:
    void blockContent() override;
    void suspendAccount() override;
    void generateAlert() override;
    void logAction() override;
};

