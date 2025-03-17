#pragma once
#include <iostream>

class IMachineLearning
{
    // Обучение модели
    virtual void trainModel() = 0;

    // Обновление алгоритмов
    virtual void updateAlgorithm() = 0;

    // Оценка эффективности
    virtual void evaluatePerformance() = 0;

    // Развёртывание модели
    virtual void deployNewModel() = 0;
};

