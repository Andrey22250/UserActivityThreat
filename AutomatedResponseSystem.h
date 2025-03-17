#pragma once
#include <iostream>
#include "IResponseSystem.h"

class AutomatedResponseSystem : public IResponseSystem
{
    void blockContent() override;
    void suspendAccount() override;
    void generateAlert() override;
    void logAction() override;
};

