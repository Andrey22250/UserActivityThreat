#pragma once
#include <iostream>
#include "IThreatAssessment.h"

class ThreatClassificationModule : public IThreatAssessment
{
    void evaluateThreatLevel() override;
    void applyPredefinedModels() override;
    void generateThreatReport() override;
    void sendToResponseSystem() override;
};

