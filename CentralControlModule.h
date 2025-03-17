#pragma once
#include "IControlCenter.h"

class CentralControlModule : public IControlCenter
{
public:
    void configureSystemParameters() override;
    void monitorModuleStatus() override;
    void adjustThreatLevels() override;
    void generateSystemReport() override;
};

