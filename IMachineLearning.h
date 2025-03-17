#pragma once
#include <iostream>

class IMachineLearning
{
public:
    // �������� ������
    virtual void trainModel() = 0;

    // ���������� ����������
    virtual void updateAlgorithm() = 0;

    // ������ �������������
    virtual void evaluatePerformance() = 0;

    // ������������ ������
    virtual void deployNewModel() = 0;
};

