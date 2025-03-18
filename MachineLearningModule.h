#pragma once
#include "IMachineLearning.h"
#include <string>

class MachineLearningModule : public IMachineLearning
{
private:
    std::string modelName; //��� �������� �������� ������� ��������� ������.
    int trainingIterations; //���������� �������� �������� ��� ������������ ��������.
public:
    void trainModel() override;
    void updateAlgorithm() override;
    void evaluatePerformance() override;
    void deployNewModel() override;
};

