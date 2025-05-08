#pragma once
#include "IPlatformFactory.h"

class WebPlatformFactory : public IPlatformFactory {
public:
    ILogger* createLogger() override;
    IDataCollectorNew* createDataCollector() override;
    INotificationSystem* createNotificationSystem() override;
};

