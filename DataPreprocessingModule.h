#pragma once
#include <iostream>
#include "IDataProcessorComponent.h"

class DataPreprocessingModule : public IDataProcessorComponent {
public:
    std::string process(const std::string& input) override;
};