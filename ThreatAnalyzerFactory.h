//Ёто базова€ фабрика, определ€юща€ метод createAnalyzer(), который возвращает объект IThreatAnalyzer
#pragma once
#include "IThreatAnalyzer.h"

class ThreatAnalyzerFactory {
public:
    virtual IThreatAnalyzer* createAnalyzer() = 0;
};