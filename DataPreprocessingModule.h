#pragma once
#include <iostream>
#include "IDataPreprocessor.h"

class DataPreprocessingModule : public IDataPreprocessor
{
public:
    void cleanData() override;
    void normalizeData() override;
    void structureData() override;
    void sendToAnalysis() override;
};

