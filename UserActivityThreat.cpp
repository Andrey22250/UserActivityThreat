#include <iostream>
#include <windows.h>
#include "MLThreatAnalyzerFactory.h"
#include "RuleBasedThreatAnalyzerFactory.h"
#include "WebPlatformFactory.h"
#include "MobilePlatformFactory.h"
#include "runScript.h"
#include "SystemConfigManager.h"
#include "ThreatDetectionModule.h"
#include "ModeratorConnectionPool.h"
#include <vector>
#include <memory>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	// --- Factory Method Demo ---
	std::cout << "=== Factory Method Demo ===";
    MLThreatAnalyzerFactory mlFactory;
    RuleBasedThreatAnalyzerFactory ruleFactory;

    std::cout << "\n=== ML Анализатор ===\n";
    runAnalysis(&mlFactory);

    std::cout << "\n=== Основанный на правилах Анализатор ===\n";
    runAnalysis(&ruleFactory);

	// --- Abstract Factory Demo ---
	std::cout << "\n=== Abstract Factory Demo ===\n";
    WebPlatformFactory webFactory;
    MobilePlatformFactory mobileFactory;

    std::cout << "--- Web Platform ---\n";
    runSystem(&webFactory);

    std::cout << "\n--- Mobile Platform ---\n";
    runSystem(&mobileFactory);

	// --- Singleton Demo ---
	std::cout << "\n=== Singleton Demo ===\n";
    auto* config = SystemConfigManager::getInstance();

    std::cout << "Logging активировано: " << std::boolalpha << config->isLoggingEnabled() << "\n";
    std::cout << "ML активировано: " << config->isMachineLearningEnabled() << "\n";
    std::cout << "Уровень угрозы: " << config->getThreatLevel() << "\n";

    // Меняем настройки
    config->setLoggingEnabled(false);
    config->setMachineLearningEnabled(true);
    config->setThreatLevel(7);

    std::cout << "\nНовые настройки:\n";
    std::cout << "Logging активировано: " << config->isLoggingEnabled() << "\n";
    std::cout << "ML активировано: " << config->isMachineLearningEnabled() << "\n";
    std::cout << "Уровень угрозы: " << config->getThreatLevel() << "\n";

	// --- Prototype Demo ---
	std::cout << "\n=== Prototype Demo ===\n";
    ThreatDetectionModule* original = new ThreatDetectionModule("ML+Аномальный");
    ICloneableModule* clone1 = original->clone();
    ICloneableModule* clone2 = clone1->clone();

    clone1->execute();
    clone2->execute();

    delete original;
    delete clone1;
    delete clone2;

	// --- Object Pool Demo ---
	std::cout << "\n=== Object Pool Demo ===\n";
    ModeratorConnectionPool pool(2);

    IModeratorConnection* conn1 = pool.acquire();
    conn1->sendAlert("Подозрительная активность найдена");

    IModeratorConnection* conn2 = pool.acquire();
    conn2->sendAlert("Многократный провал авторизации");

    pool.release(conn1);
    pool.release(conn2);

    return 0;
}