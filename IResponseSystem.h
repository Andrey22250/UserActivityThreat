#pragma once
#include <string>

class IResponseSystem
{
public:
    // Блокировка контента
    virtual void blockContent() = 0;

    // Блокировка аккаунта
    virtual void suspendAccount() = 0;

    // Генерация предупреждения
    virtual void generateAlert() = 0;

    // Логирование действий
    virtual void logAction() = 0;
};