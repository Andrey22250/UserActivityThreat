#pragma once  
#include <iostream>  
#include "IDataCollector.h"  
#include "IDataPreprocessor.h"  
#include "IBehaviorAnalyzer.h"  
#include "IThreatAssessment.h"  
#include "IResponseSystem.h"  
#include "IMachineLearning.h"  
#include "ICommunication.h"  

class IControlCenter  
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
   virtual void initializeModules(IDataCollector* dataCollector,  
       IDataPreprocessor* dataPreprocessor,  
       IBehaviorAnalyzer* behaviorAnalyzer,  
       IThreatAssessment* threatAssessment,  
       IResponseSystem* responseSystem,  
       IMachineLearning* machineLearning,  
       ICommunication* communication) = 0;  

   // Настройка параметров  
   virtual void configureSystemParameters() = 0;  

   // Мониторинг состояния  
   virtual void monitorModuleStatus() = 0;  

   // Корректировка уровней угроз  
   virtual void adjustThreatLevels() = 0;  

   // Генерация системного отчёта  
   virtual void generateSystemReport() = 0;  

   // Настройка модулей  
   virtual void communicateUserModer() = 0;  
   virtual void manageDataCollection() = 0;  
   virtual void processAndAnalyzeData() = 0;  
   virtual void assessThreats() = 0;  
   virtual void updateMachineLearning() = 0;  
};