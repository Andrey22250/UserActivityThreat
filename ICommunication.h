#pragma once

class ICommunication
{
public:
    // ����������� ������������
    virtual void notifyUser() = 0;

    // �������� ������
    virtual void sendReportToModerators() = 0;

    // ��������� �������� �����
    virtual void receiveModeratorFeedback() = 0;

    // ��������� ����������� ����������
    virtual void establishSecureConnection() = 0;
};

