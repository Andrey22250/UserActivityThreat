//������ ������� �����, ����� ���������� ���������� �������.
#pragma once
#include "ThreatAnalyzerFactory.h"
#include "MLThreatAnalyzer.h"

class MLThreatAnalyzerFactory : public ThreatAnalyzerFactory {
public:
    IThreatAnalyzer* createAnalyzer() override;
};