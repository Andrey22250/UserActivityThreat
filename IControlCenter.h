#pragma once
#include <string>

class IControlCenter
{
    // ��������� ����������
    virtual void configureSystemParameters() = 0;

    // ���������� ���������
    virtual std::string monitorModuleStatus() = 0;

    // ������������� ������� �����
    virtual void adjustThreatLevels() = 0;

    // ��������� ���������� ������
    virtual std::string generateSystemReport() = 0;
};

