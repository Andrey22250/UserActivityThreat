// ��������� ��� ����������� � ����������.
#pragma once
#include <string>

class IModeratorConnection {
public:
    virtual void sendAlert(const std::string& message) = 0;
};

