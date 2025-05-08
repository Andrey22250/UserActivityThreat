#include "MobilePlatformFactory.h"
#include <iostream>

class MobileLogger : public ILogger {
public:
    void log(const std::string& message) override {
        std::cout << "[Mobile Logger] " << message << std::endl;
    }
};

class MobileDataCollector : public IDataCollectorNew {
public:
    void collectData(const std::string& data) override {
        std::cout << "[Mobile Сборщик] Собрано: " << data << std::endl;
    }
};

class MobileNotificationSystem : public INotificationSystem {
public:
    void notifyUser(const std::string& message) override {
        std::cout << "[Mobile Уведомление] " << message << std::endl;
    }
};

ILogger* MobilePlatformFactory::createLogger() {
    return new MobileLogger();
}

IDataCollectorNew* MobilePlatformFactory::createDataCollector() {
    return new MobileDataCollector();
}

INotificationSystem* MobilePlatformFactory::createNotificationSystem() {
    return new MobileNotificationSystem();
}