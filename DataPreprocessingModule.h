#pragma once
#include <iostream>
#include "IDataPreprocessor.h"

class DataPreprocessingModule : public IDataPreprocessor
{
private:
    // ��������� ������
    string cleaned_data;
    // ��������������� ������
    string normalized_data;
    // ����������������� ������
    string structured_data;
public:
    // ����� ��� ������� ������
    void cleanData() override;
    // ����� ��� ������������ ������
    void normalizeData() override;
    // ����� ��� ���������������� ������
    void structureData() override;
    // ����� ��� �������� ������ �� ������
    void sendToAnalysis() override;
};
