//��� ������� �������, ������������ ����� createAnalyzer(), ������� ���������� ������ IThreatAnalyzer
#pragma once
#include "IThreatAnalyzer.h"

class ThreatAnalyzerFactory {
public:
    virtual IThreatAnalyzer* createAnalyzer() = 0;
};