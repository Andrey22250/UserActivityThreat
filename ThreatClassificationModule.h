#pragma once
#include <iostream>
#include "IThreatAssessment.h"

class ThreatClassificationModule : public IThreatAssessment
{
private:
    int threatLevel; //уровень угрозы от 1 до 10
	std::string responseStrategy; //стратегия реагирования
public:
    void evaluateThreatLevel() override;
    void applyPredefinedModels() override;
    void generateThreatReport() override;
    void sendToResponseSystem() override;
};

