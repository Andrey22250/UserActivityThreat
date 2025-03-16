#pragma once
#include <vector>
#include <string>

class IMachineLearning
{
    // Обучение модели
    virtual void trainModel(const std::vector<std::string>& dataset) = 0;

    // Обновление алгоритмов
    virtual void updateAlgorithm() = 0;

    // Оценка эффективности
    virtual double evaluatePerformance() = 0;

    // Развёртывание модели
    virtual void deployNewModel() = 0;
};

