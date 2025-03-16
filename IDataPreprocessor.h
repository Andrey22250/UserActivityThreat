#pragma once
#include <string>
#include <iostream>

using namespace std;

class IDataPreprocessor
{
public:

    // ������� ������
    virtual void cleanData() = 0;

    // ������������
    virtual void normalizeData() = 0;

    // ����������������
    virtual void structureData() = 0;

    // �������� �� ������
    virtual void sendToAnalysis() = 0;
};

