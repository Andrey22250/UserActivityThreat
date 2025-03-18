#pragma once
#include <iostream>
#include "IDataPreprocessor.h"

class DataPreprocessingModule : public IDataPreprocessor
{
private:
    // Очищенные данные
    string cleaned_data;
    // Нормализованные данные
    string normalized_data;
    // Структурированные данные
    string structured_data;
public:
    // Метод для очистки данных
    void cleanData() override;
    // Метод для нормализации данных
    void normalizeData() override;
    // Метод для структурирования данных
    void structureData() override;
    // Метод для отправки данных на анализ
    void sendToAnalysis() override;
};
