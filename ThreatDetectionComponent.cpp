#include "ThreatDetectionComponent.h"
#include "IDataProcessingVisitor.h"
#include <iostream>

void ThreatDetectionComponent::detectThreats() {
    std::cout << "[ThreatDetectionComponent] Обнаружение угроз\n";
}

void ThreatDetectionComponent::accept(IDataProcessingVisitor& visitor) {
    visitor.visit(*this);
}