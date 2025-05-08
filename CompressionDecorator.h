// Конкретный декоратор, добавляющий возможность сжатия данных перед их отправкой. Оборачивает объект IDataCollector и расширяет метод sendToProcessing() логикой компрессии.
#pragma once
#include "IDataCollectorDecorator.h"

class CompressionDecorator : public IDataCollectorDecorator {
public:
    CompressionDecorator(IDataCollector* collector);
    int sendToProcessing() override;
};