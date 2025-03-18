#pragma once
#include "ICommunication.h"
#include "UserNotificationSystem.h"
#include <iostream>

class ModeratorCommunication : public ICommunication
{
private:
    string notify;
public:
    ModeratorCommunication(string notify);
    void notifyUser() override;
    void sendReportToModerators() override;
    void receiveModeratorFeedback() override;
    void establishSecureConnection() override;
};

