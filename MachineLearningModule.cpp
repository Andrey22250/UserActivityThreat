#include "MachineLearningModule.h"
#include <iostream>

std::string MachineLearningModule::process(const std::string& input) {
    std::cout << "[MachineLearning] Обработка данных: " << input << "\n";
    return "[ML Processed] " + input;
}