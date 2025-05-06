#pragma once
#include <string>
#include <iostream>

using namespace std;

class IDataPreprocessor
{
public:
    virtual void preprocess(const std::string& data) = 0;
    
    // Очистка данных
    virtual void cleanData() = 0;

    // Нормализация
    virtual void normalizeData() = 0;

    // Структурирование
    virtual void structureData() = 0;

    // Отправка на анализ
    virtual void sendToAnalysis() = 0;
};

