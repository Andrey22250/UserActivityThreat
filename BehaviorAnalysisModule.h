#pragma once
#include <string>
#include "IBehaviorAnalyzer.h"

class BehaviorAnalysisModule : public IBehaviorAnalyzer
{
private:
    static int detectedThreats;       // ���������� ������������ �����
    std::string analysisLog;          // ��� �������
public:
    void analyzeUserActions() override;
    void detectToxicContent() override;
    void identifyMaliciousSoftware() override;
    void sendToThreatAssessment() override;
};

