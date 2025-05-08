// Файл для записи дополнительных функций, которые используются в основном коде
#pragma once
#include "MLThreatAnalyzerFactory.h"
#include "RuleBasedThreatAnalyzerFactory.h"
#include "WebPlatformFactory.h"
#include "MobilePlatformFactory.h"
// Эта функция получает любую фабрику, создаёт анализатор через неё и вызывает у него analyze()
void runAnalysis(ThreatAnalyzerFactory* factory) {
    IThreatAnalyzer* analyzer = factory->createAnalyzer();
    analyzer->analyze();
    delete analyzer;
}
// Эта функция получает любую фабрику, создаёт систему через неё и вызывает у неё методы принимает абстрактную фабрику запрашивает у неё 
//компоненты работает с ними, не зная, веб они или мобильные
void runSystem(IPlatformFactory* factory) {
    std::unique_ptr<ILogger> logger(factory->createLogger());
    std::unique_ptr<IDataCollectorNew> collector(factory->createDataCollector());
    std::unique_ptr<INotificationSystem> notifier(factory->createNotificationSystem());

    logger->log("Система инициализирована.");
    collector->collectData("User123 нажал на рекламу.");
    notifier->notifyUser("Срок действия вашего сеанса истек.");
}