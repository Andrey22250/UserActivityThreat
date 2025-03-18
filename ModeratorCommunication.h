#pragma once
#include "ICommunication.h"
#include "UserNotificationSystem.h"
#include <iostream>
#include <ctime>

class ModeratorCommunication : public ICommunication
{
private:
    int messagePriority; //приоритет уведомления (1 — высокий, 3 — низкий)
	std::string moderatorContact; //контактные данные модератора
	string notify; //уведомление для пользователя
public:
	ModeratorCommunication(string notify); //конструктор
    void notifyUser() override;
    void sendReportToModerators() override;
    void receiveModeratorFeedback() override;
    void establishSecureConnection() override;
};

