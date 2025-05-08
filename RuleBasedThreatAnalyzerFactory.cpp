#include "RuleBasedThreatAnalyzerFactory.h"


IThreatAnalyzer* RuleBasedThreatAnalyzerFactory::createAnalyzer() {
    return new RuleBasedThreatAnalyzer();
}