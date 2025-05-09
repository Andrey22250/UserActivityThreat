#include <iostream>
#include <windows.h>
#include "AnalyzeUserBehaviorCommand.h"
#include "LogActivityCommand.h"
#include "CommandInvoker.h"
#include "SpamFilterHandler.h"
#include "AnomalyDetectionHandler.h"
#include "DefaultHandler.h"
#include "UserActivityModule.h"
#include "ThreatDetectionComponent.h"
#include "LoggingVisitor.h"
#include <vector>
#include <memory>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	// --- Command Demo ---
	std::cout << "=== Command Demo ===\n";
    CommandInvoker invoker;

    ICommand* analyzeCmd = new AnalyzeUserBehaviorCommand("Сеанс: активность по кликам и просмотрам");
    ICommand* logCmd = new LogActivityCommand("Пользователь вошёл в систему");

    invoker.addCommand(analyzeCmd);
    invoker.addCommand(logCmd);

    std::cout << "--- Выполнение команд ---" << std::endl;
    invoker.run();

    std::cout << "\n--- Отмена команд ---" << std::endl;
    invoker.undoAll();

	// --- Chain of Responsibility Demo ---
	std::cout << "\n=== Chain of Responsibility Demo ===\n";
    auto spamFilter = std::make_shared<SpamFilterHandler>();
    auto anomalyDetector = std::make_shared<AnomalyDetectionHandler>();
    auto defaultHandler = std::make_shared<DefaultHandler>();

    spamFilter->setNext(anomalyDetector);
    anomalyDetector->setNext(defaultHandler);

    std::string userData1 = "Это сообщение содержит spam";
    std::string userData2 = "Это suspicious активность";
    std::string userData3 = "Обычное сообщение";

    spamFilter->handle(userData1);
    spamFilter->handle(userData2);
    spamFilter->handle(userData3);

	// --- Visitor Demo ---
	std::cout << "\n=== Visitor Demo ===\n";
    std::vector<IVisitableModule*> modules;
    modules.push_back(new UserActivityModule());
    modules.push_back(new ThreatDetectionComponent());

    LoggingVisitor logger;

    for (auto* module : modules) {
        module->accept(logger);
    }

    for (auto* module : modules) {
        delete module;
    }

    return 0;
}