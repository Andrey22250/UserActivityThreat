#pragma once
#include <iostream>

class IControlCenter
{
    // ��������� ����������
    virtual void configureSystemParameters() = 0;

    // ���������� ���������
    virtual void monitorModuleStatus() = 0;

    // ������������� ������� �����
    virtual void adjustThreatLevels() = 0;

    // ��������� ���������� ������
    virtual void generateSystemReport() = 0;
};