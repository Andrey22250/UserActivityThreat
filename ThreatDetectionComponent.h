#pragma once
#include "IVisitableModule.h"

class ThreatDetectionComponent : public IVisitableModule {
public:
    void detectThreats();
    void accept(IDataProcessingVisitor& visitor) override;
};