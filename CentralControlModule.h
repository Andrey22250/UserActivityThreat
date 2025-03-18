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
   // Инициализация компонентов  
   void initializeModules(  
       IDataCollector* dataCollector,  
       IDataPreprocessor* dataPreprocessor,  
       IBehaviorAnalyzer* behaviorAnalyzer,  
       IThreatAssessment* threatAssessment,  
       IResponseSystem* responseSystem,  
       IMachineLearning* machineLearning,  
       ICommunication* communication) override;  

   // Настройка параметров системы  
   void configureSystemParameters() override;  

   // Мониторинг состояния модулей  
   void monitorModuleStatus() override;  

   // Регулировка уровней угроз  
   void adjustThreatLevels() override;  

   // Генерация отчета системы  
   void generateSystemReport() override;  

   // Сбор данных  
   void manageDataCollection();  

   // Обработка и анализ данных  
   void processAndAnalyzeData();  

   // Оценка угроз  
   void assessThreats();  

   // Обновление машинного обучения  
   void updateMachineLearning();  

   // Уведомление модератору и пользователю  
   void communicateUserModer();  
};
