#pragma once
#include <string>

class ICommunication
{
    // Уведомление пользователя
    virtual void notifyUser(const std::string& userID, const std::string& message) = 0;

    // Отправка отчёта
    virtual void sendReportToModerators(const std::string& report) = 0;

    // Получение обратной связи
    virtual void receiveModeratorFeedback() = 0;

    // Установка безопасного соединения
    virtual void establishSecureConnection() = 0;
};

