// ласс, реализующий IDataPreprocessor; очищает, нормализует и структурирует собранные данные перед анализом.
#pragma once
#include <iostream>
#include "IDataProcessorComponent.h"

class DataPreprocessingModule : public IDataProcessorComponent {
public:
    std::string process(const std::string& input) override;
};