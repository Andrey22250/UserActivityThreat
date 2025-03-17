#pragma once
#include "ICommunication.h"
#include <iostream>
class ModeratorCommunication : public ICommunication
{
public:
    void notifyUser() override;
    void sendReportToModerators() override;
    void receiveModeratorFeedback() override;
    void establishSecureConnection() override;
};

