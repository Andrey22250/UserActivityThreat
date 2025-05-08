// ������������������ ������� ������������ �� ���������
#pragma once
#include <iostream>
#include "IResponseSystem.h"

class AutomatedResponseSystem : public IResponseSystem
{
private:
    std::string responseLog;          // ��� �������� �������
    static int alertCount;            // ���������� ����������� �����������
public:
    void blockContent() override;
    void suspendAccount() override;
    void generateAlert() override;
    void logAction() override;
};

