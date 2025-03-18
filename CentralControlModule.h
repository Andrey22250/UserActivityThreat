#pragma once
#include "IControlCenter.h"

class CentralControlModule : public IControlCenter
{
private:
    IDataCollector* dataCollector;
    IDataPreprocessor* dataPreprocessor;
    IBehaviorAnalyzer* behaviorAnalyzer;
    IThreatAssessment* threatAssessment;
    IResponseSystem* responseSystem;
    IMachineLearning* machineLearning;
    ICommunication* communication;

public:
    void initializeModules(     //Инициализация компонентов
        IDataCollector* dataCollector,
        IDataPreprocessor* dataPreprocessor,
        IBehaviorAnalyzer* behaviorAnalyzer,
        IThreatAssessment* threatAssessment,
        IResponseSystem* responseSystem,
        IMachineLearning* machineLearning,
        ICommunication* communication) override;
    void configureSystemParameters() override;
    void monitorModuleStatus() override;
    void adjustThreatLevels() override;
    void generateSystemReport() override;
    void manageDataCollection();    //Сбор данных
    void processAndAnalyzeData();   //Анализ всех данных
    void assessThreats();           //Реагирование на угрозы
    void updateMachineLearning();   //Машинное обучение
    void communicateUserModer();    //Уведомление модератору и пользователю
};

