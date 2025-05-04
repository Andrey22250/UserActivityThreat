#include "DataPreprocessingModule.h"
#include <iostream>

std::string DataPreprocessingModule::process(const std::string& input) {
    std::cout << "[Preprocessing] Обработка данных: " << input << "\n";
    return "[Preprocessed] " + input;
}