#pragma once
#include "IDataProcessorComponent.h"

class MachineLearningModule : public IDataProcessorComponent {
public:
    std::string process(const std::string& input) override;
};