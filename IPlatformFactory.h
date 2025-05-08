#pragma once
#include "ILogger.h"
#include "IDataCollectorNew.h"
#include "INotificationSystem.h"

class IPlatformFactory {
public:
    virtual ILogger* createLogger() = 0;
    virtual IDataCollectorNew* createDataCollector() = 0;
    virtual INotificationSystem* createNotificationSystem() = 0;
};

