#pragma once
class UserActivityModule;
class ThreatDetectionComponent;

class IDataProcessingVisitor {
public:
    virtual void visit(UserActivityModule& module) = 0;
    virtual void visit(ThreatDetectionComponent& module) = 0;
};