#pragma once
#include "IDataCollectorDecorator.h"

// Декоратор с логированием
class LoggingDecorator : public IDataCollectorDecorator {
public:
    using IDataCollectorDecorator::IDataCollectorDecorator;
    int collectUserActions() override;
};