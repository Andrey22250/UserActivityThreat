#pragma once
#include <string>

class IThreatAssessment
{
    // ������ ������ ������
    virtual void evaluateThreatLevel() = 0;

    // ���������� �������
    virtual void applyPredefinedModels() = 0;

    // ��������� ������
    virtual void generateThreatReport() = 0;

    // �������� � ������� ������������
    virtual void sendToResponseSystem() = 0;
};

