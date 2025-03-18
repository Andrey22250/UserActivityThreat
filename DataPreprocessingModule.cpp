#include "DataPreprocessingModule.h"

void DataPreprocessingModule::cleanData() 
{
    std::cout << "Очистка данных..." << std::endl;
    // Пример очистки данных
    cleaned_data = "очищенные данные";
}

void DataPreprocessingModule::normalizeData() {
    std::cout << "Нормализация данных..." << std::endl;
    // Пример нормализации данных
    normalized_data = "нормализованные данные";
}

void DataPreprocessingModule::structureData() {
    std::cout << "Структурирование данных..." << std::endl;
    // Пример структурирования данных
    structured_data = "структурированные данные";
}

void DataPreprocessingModule::sendToAnalysis() {
    std::cout << "Отправка данных на анализ..." << std::endl;
    // Пример отправки данных на анализ
    std::cout << "Данные для анализа: " << structured_data << std::endl;
}