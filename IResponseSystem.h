#pragma once
#include <string>

class IResponseSystem
{
    // ���������� ��������
    virtual void blockContent() = 0;

    // ���������� ��������
    virtual void suspendAccount() = 0;

    // ��������� ��������������
    virtual void generateAlert() = 0;

    // ����������� ��������
    virtual void logAction() = 0;
};