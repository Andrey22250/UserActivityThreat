#include "ThreatDetectionModule.h"
#include <iostream>

ThreatDetectionModule::ThreatDetectionModule(const std::string& config)
    : configProfile(config) {
}

ThreatDetectionModule* ThreatDetectionModule::clone() const {
    return new ThreatDetectionModule(configProfile);
}

void ThreatDetectionModule::execute() const {
    std::cout << "����������� ����� � ������� �������: " << configProfile << std::endl;
}