// Использует правила и логику для анализа угроз.
#pragma once
#include "IThreatAnalyzer.h"
#include <iostream>

class RuleBasedThreatAnalyzer : public IThreatAnalyzer {
public:
    void analyze() override;
};