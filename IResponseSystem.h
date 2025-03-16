#pragma once
#include <string>

class IResponseSystem
{
    // Блокировка контента
    virtual void blockContent(const std::string& contentID) = 0;

    // Блокировка аккаунта
    virtual void suspendAccount(const std::string& userID) = 0;

    // Генерация предупреждения
    virtual void generateAlert() = 0;

    // Логирование действий
    virtual void logAction(const std::string& action) = 0;
};

