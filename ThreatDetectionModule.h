// У нас есть настроенный модуль ThreatDetectionModule, представляющий, например, специфичную стратегию обнаружения угроз
#pragma once
#include "ICloneableModule.h"
#include <string>

class ThreatDetectionModule : public ICloneableModule {
private:
    std::string configProfile;
public:
    ThreatDetectionModule(const std::string& config);
    ThreatDetectionModule* clone() const override;
    void execute() const override;
};