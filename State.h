#pragma once
#include <string>
#include <memory>

class AnalysisContext;

class IAnalysisState {
public:
    virtual ~IAnalysisState() = default;
    virtual void handle(AnalysisContext& context) = 0;
    virtual std::string getName() const = 0;
};

class InitialCollectionState : public IAnalysisState {
public:
    void handle(AnalysisContext& context) override;
    std::string getName() const override { return "InitialCollectionState"; }
};

class BehaviorAnalysisState : public IAnalysisState {
public:
    void handle(AnalysisContext& context) override;
    std::string getName() const override { return "BehaviorAnalysisState"; }
};

class ThreatAssessmentState : public IAnalysisState {
public:
    void handle(AnalysisContext& context) override;
    std::string getName() const override { return "ThreatAssessmentState"; }
};

class AnalysisContext {
private:
    std::shared_ptr<IAnalysisState> currentState;
public:
    AnalysisContext(std::shared_ptr<IAnalysisState> state);
    void setState(std::shared_ptr<IAnalysisState> state);
    void process();
    std::string getStateName() const;
};