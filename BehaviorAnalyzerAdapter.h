// �����-�������, ������� ���������� ��������� ThirdPartyAnalyzer ��� ��������� �������� ��������� IBehaviorAnalyzer
#pragma once
#include <string>
#include <iostream>
#include "IThirdBehaviorAnalysis.h"

// ���������� �������
class BehaviorAnalyzerAdapter : public IThirdBehaviorAnalysis {
private:
    IThirdBehaviorAnalysis* legacyAnalyzer;
    int detectedNewThreats;       // ���������� ������������ �����
    std::string analysisLog;          // ��� �������
public:
    BehaviorAnalyzerAdapter(IThirdBehaviorAnalysis* analyzer);
    void analyzeBehavior() override;
    virtual void analyzeUserActions();

    // ����� ���������� ��������
    virtual void detectToxicContent();

    // ������������� ������������ ��
    virtual void identifyMaliciousSoftware();

    // �������� ������ �����
    virtual void sendToThreatAssessment();
};