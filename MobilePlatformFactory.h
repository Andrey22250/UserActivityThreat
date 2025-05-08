#pragma once
#include "IPlatformFactory.h"

class MobilePlatformFactory : public IPlatformFactory {
public:
    ILogger* createLogger() override;
    IDataCollectorNew* createDataCollector() override;
    INotificationSystem* createNotificationSystem() override;
};

