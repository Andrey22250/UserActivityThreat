#pragma once
#include "IMachineLearning.h"

class MachineLearningModule : public IMachineLearning
{
public:
    void trainModel() override;
    void updateAlgorithm() override;
    void evaluatePerformance() override;
    void deployNewModel() override;
};

