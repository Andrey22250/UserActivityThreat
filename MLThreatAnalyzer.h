// ���������� �������� �������� ��� ������� �����
#pragma once
#include "IThreatAnalyzer.h"
#include <iostream>

class MLThreatAnalyzer : public IThreatAnalyzer {
public:
    void analyze() override;
};