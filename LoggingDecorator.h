#pragma once
#include "IDataCollectorDecorator.h"

// ��������� � ������������
class LoggingDecorator : public IDataCollectorDecorator {
public:
    using IDataCollectorDecorator::IDataCollectorDecorator;
    int collectUserActions() override;
};