#include "DataPreprocessingModule.h"
#include <iostream>

std::string DataPreprocessingModule::process(const std::string& input) {
    std::cout << "[Preprocessing] ��������� ������: " << input << "\n";
    return "[Preprocessed] " + input;
}