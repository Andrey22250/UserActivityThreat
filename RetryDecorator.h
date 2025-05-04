#pragma once
#include "IDataCollectorDecorator.h"
#include <thread>
#include <chrono>

class RetryDecorator : public IDataCollectorDecorator {
private:
    int maxRetries;
    int delayMs;

public:
    RetryDecorator(IDataCollector* collector, int retries = 3, int delay = 500);
    int sendToProcessing() override;
};
