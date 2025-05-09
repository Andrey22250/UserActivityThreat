#pragma once
#include "IDataProcessingVisitor.h"

class LoggingVisitor : public IDataProcessingVisitor {
public:
    void visit(UserActivityModule& module) override;
    void visit(ThreatDetectionComponent& module) override;
};