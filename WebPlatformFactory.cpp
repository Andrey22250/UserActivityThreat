#include "WebPlatformFactory.h"
#include <iostream>

class WebLogger : public ILogger {
public:
    void log(const std::string& message) override {
        std::cout << "[Web Logger] " << message << std::endl;
    }
};

class WebDataCollector : public IDataCollectorNew {
public:
    void collectData(const std::string& data) override {
        std::cout << "[Web Сборщик] Собрано: " << data << std::endl;
    }
};

class WebNotificationSystem : public INotificationSystem {
public:
    void notifyUser(const std::string& message) override {
        std::cout << "[Web Уведомление] " << message << std::endl;
    }
};

ILogger* WebPlatformFactory::createLogger() {
    return new WebLogger();
}

IDataCollectorNew* WebPlatformFactory::createDataCollector() {
    return new WebDataCollector();
}

INotificationSystem* WebPlatformFactory::createNotificationSystem() {
    return new WebNotificationSystem();
}