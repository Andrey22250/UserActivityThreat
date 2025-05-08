#include "MLThreatAnalyzerFactory.h"

IThreatAnalyzer* MLThreatAnalyzerFactory::createAnalyzer() {
    return new MLThreatAnalyzer();
}