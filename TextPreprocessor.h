#include "IDataPreprocessor.h"
#include <iostream>

class TextPreprocessor : public IDataPreprocessor {
public:
    void preprocess(const std::string& data) override;
    // Очистка данных
    virtual void cleanData() override {}

    // Нормализация
    virtual void normalizeData() override {}

    // Структурирование
    virtual void structureData() override {}

    // Отправка на анализ
    virtual void sendToAnalysis() override {}
};