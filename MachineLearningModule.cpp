#include "MachineLearningModule.h"
#include <iostream>

std::string MachineLearningModule::process(const std::string& input) {
    std::cout << "[MachineLearning] ��������� ������: " << input << "\n";
    return "[ML Processed] " + input;
}