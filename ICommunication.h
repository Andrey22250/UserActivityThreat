#pragma once
#include <string>

class ICommunication
{
    // ����������� ������������
    virtual void notifyUser(const std::string& userID, const std::string& message) = 0;

    // �������� ������
    virtual void sendReportToModerators(const std::string& report) = 0;

    // ��������� �������� �����
    virtual void receiveModeratorFeedback() = 0;

    // ��������� ����������� ����������
    virtual void establishSecureConnection() = 0;
};

