//Конкретная реализация соединения с модератором
#pragma once
#include "IModeratorConnection.h"
#include <iostream>

class ModeratorConnection : public IModeratorConnection {
public:
    void sendAlert(const std::string& message) override;
};