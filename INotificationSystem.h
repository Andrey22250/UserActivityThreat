#pragma once
#include <string>

class INotificationSystem {
public:
    virtual void notifyUser(const std::string& message) = 0;
};

