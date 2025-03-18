#pragma once
#include "IMachineLearning.h"
#include <string>

class MachineLearningModule : public IMachineLearning
{
private:
    std::string modelName; //для хранения названия текущей обучаемой модели.
    int trainingIterations; //количество итераций обучения для отслеживания процесса.
public:
    void trainModel() override;
    void updateAlgorithm() override;
    void evaluatePerformance() override;
    void deployNewModel() override;
};

