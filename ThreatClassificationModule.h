#pragma once
#include <iostream>
#include "IThreatAssessment.h"

class ThreatClassificationModule : public IThreatAssessment
{
private:
    int threatLevel; //������� ������ �� 1 �� 10
	std::string responseStrategy; //��������� ������������
public:
    void evaluateThreatLevel() override;
    void applyPredefinedModels() override;
    void generateThreatReport() override;
    void sendToResponseSystem() override;
};

