//Каждая фабрика знает, какой конкретный анализатор создать.
#pragma once
#include "ThreatAnalyzerFactory.h"
#include "RuleBasedThreatAnalyzer.h"

class RuleBasedThreatAnalyzerFactory : public ThreatAnalyzerFactory {
public:
    IThreatAnalyzer* createAnalyzer() override;
};