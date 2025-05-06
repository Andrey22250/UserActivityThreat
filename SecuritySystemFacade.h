#pragma once
#include "CentralControlModule.h"

class SecuritySystemFacade {
private:
    CentralControlModule* controlModule;
public:
    SecuritySystemFacade();
    ~SecuritySystemFacade();

    void runFullCheck(); // Единая точка входа
};