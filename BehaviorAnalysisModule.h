#pragma once
#include "IBehaviorAnalyzer.h"

class BehaviorAnalysisModule : public IBehaviorAnalyzer
{
    void analyzeUserActions() override;
    void detectToxicContent() override;
    void identifyMaliciousSoftware() override;
    void sendToThreatAssessment() override;
};

