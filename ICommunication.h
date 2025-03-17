#pragma once

class ICommunication
{
public:
    // Уведомление пользователя
    virtual void notifyUser() = 0;

    // Отправка отчёта
    virtual void sendReportToModerators() = 0;

    // Получение обратной связи
    virtual void receiveModeratorFeedback() = 0;

    // Установка безопасного соединения
    virtual void establishSecureConnection() = 0;
};

