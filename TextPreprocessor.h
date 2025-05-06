#include "IDataPreprocessor.h"
#include <iostream>

class TextPreprocessor : public IDataPreprocessor {
public:
    void preprocess(const std::string& data) override;
    // ������� ������
    virtual void cleanData() override {}

    // ������������
    virtual void normalizeData() override {}

    // ����������������
    virtual void structureData() override {}

    // �������� �� ������
    virtual void sendToAnalysis() override {}
};