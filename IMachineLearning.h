#pragma once
#include <vector>
#include <string>

class IMachineLearning
{
    // �������� ������
    virtual void trainModel(const std::vector<std::string>& dataset) = 0;

    // ���������� ����������
    virtual void updateAlgorithm() = 0;

    // ������ �������������
    virtual double evaluatePerformance() = 0;

    // ������������ ������
    virtual void deployNewModel() = 0;
};

