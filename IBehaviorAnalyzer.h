#pragma once
#include <iostream>

class IBehaviorAnalyzer
{
public:
    // ������ ��������
    virtual void analyzeUserActions() = 0;

    // ����� ���������� ��������
    virtual void detectToxicContent() = 0;

    // ������������� ������������ ��
    virtual void identifyMaliciousSoftware() = 0;

    // �������� ������ �����
    virtual void sendToThreatAssessment() = 0;
};

