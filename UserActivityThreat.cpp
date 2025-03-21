﻿#include <iostream>
#include <windows.h>
#include "UserActivityCollector.h"
#include "CentralControlModule.h"
#include "DataPreprocessingModule.h"
#include "BehaviorAnalysisModule.h"
#include "ThreatClassificationModule.h"
#include "AutomatedResponseSystem.h"
#include "MachineLearningModule.h"
#include "ModeratorCommunication.h"
#include "DataCollectorProxy.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Создание объектов реальных модулей для демонстрации
    UserActivityCollector *dataCollector = new UserActivityCollector("Проверочные данные", "Метаданные");
    DataPreprocessingModule *dataPreprocessor = new DataPreprocessingModule;
    BehaviorAnalysisModule *behaviorAnalyzer = new BehaviorAnalysisModule;
    ThreatClassificationModule *threatAssessment = new ThreatClassificationModule;
    AutomatedResponseSystem *responseSystem = new AutomatedResponseSystem;
    MachineLearningModule *mlModule = new MachineLearningModule;
    ModeratorCommunication *communicationModule = new ModeratorCommunication("Оскорбления");

    // Создание центрального управляющего модуля
    CentralControlModule controlCenter;
    controlCenter.initializeModules(  //
        dataCollector, dataPreprocessor, behaviorAnalyzer,
        threatAssessment, responseSystem, mlModule, communicationModule
    );

    // Демонстрация работы системы с шагами и выводом информации
    // Здесь мы показываем делегирование, при котором CentralControlModule делегирует выполнение задач другим модулям
    cout << "=== Начало проверки всех систем ===\n";

    cout << endl << "[Шаг 1] Сбор пользовательскиз данных...\n";   
    controlCenter.manageDataCollection();

    cout << endl << "[Шаг 2] Обработка данных...\n";
    controlCenter.processAndAnalyzeData();

    cout << endl << "[Шаг 3] Реагирвоание на угрозы...\n";
    controlCenter.assessThreats();

    cout << endl << "[Шаг 4] Машинное обучение алгоритмов...\n";
    controlCenter.updateMachineLearning();

    cout << endl << "[Шаг 5] Отправка уведомления пользователю...\n";
    controlCenter.communicateUserModer();
    
    cout << "=== Проверка успешна ===\n";

	delete dataCollector;
	delete dataPreprocessor;
	delete behaviorAnalyzer;
	delete threatAssessment;
	delete responseSystem;
	delete mlModule;
	delete communicationModule;

    // Демонстрация прокси

    cout << endl << "Проверка прокси..." << endl;
    UserActivityCollector* dataCollector1 = new UserActivityCollector("Данные для обработки", "Метаданные");
    DataCollectorProxy proxyCollector1(dataCollector1, true); // Прокси с доступом
    DataCollectorProxy proxyCollector2(dataCollector1, false); // Прокси без доступа
    cout << "=== Попытка с доступом ===\n";
    proxyCollector1.sendToProcessing(); // Выполнение метода с доступом

    cout << "\n=== Попытка без доступа ===\n";
    proxyCollector2.collectUserActions(); // Попытка выполнения метода без доступа
    proxyCollector2.collectMetadata(); // Попытка выполнения метода без доступа
    proxyCollector2.encryptData(); // Попытка выполнения метода без доступа
    proxyCollector2.sendToProcessing(); // Попытка выполнения метода без доступа
    return 0;
}