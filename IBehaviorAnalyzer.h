#pragma once
class IBehaviorAnalyzer
{
    // ������ ��������
    virtual void analyzeUserActions() = 0;

    // ����� ���������� ��������
    virtual bool detectToxicContent() = 0;

    // ������������� ������������ ��
    virtual bool identifyMaliciousSoftware() = 0;

    // �������� ������ �����
    virtual void sendToThreatAssessment() = 0;
};

