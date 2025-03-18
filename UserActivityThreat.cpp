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

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Создание объектов реальных модулей для демонстрации
    UserActivityCollector dataCollector("Проверочные данные", "Метаданные");
    DataPreprocessingModule dataPreprocessor;
    BehaviorAnalysisModule behaviorAnalyzer;
    ThreatClassificationModule threatAssessment;
    AutomatedResponseSystem responseSystem;
    MachineLearningModule mlModule;
    ModeratorCommunication communicationModule("Оскорбления");

    // Создание центрального управляющего модуля
    CentralControlModule controlCenter;
    controlCenter.initializeModules(
        &dataCollector, &dataPreprocessor, &behaviorAnalyzer,
        &threatAssessment, &responseSystem, &mlModule, &communicationModule
    );

    // Демонстрация работы системы с шагами и выводом информации
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

    return 0;
}