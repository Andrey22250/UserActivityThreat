#pragma once
#include <string>

class IResponseSystem
{
    // ���������� ��������
    virtual void blockContent(const std::string& contentID) = 0;

    // ���������� ��������
    virtual void suspendAccount(const std::string& userID) = 0;

    // ��������� ��������������
    virtual void generateAlert() = 0;

    // ����������� ��������
    virtual void logAction(const std::string& action) = 0;
};

