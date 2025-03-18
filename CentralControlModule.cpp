#include "CentralControlModule.h"

void CentralControlModule::initializeModules(  
   IDataCollector* dataCollector,  
   IDataPreprocessor* dataPreprocessor,  
   IBehaviorAnalyzer* behaviorAnalyzer,  
   IThreatAssessment* threatAssessment,  
   IResponseSystem* responseSystem,  
   IMachineLearning* machineLearning,  
   ICommunication* communication)  
{  
   this->dataCollector = dataCollector;  
   this->dataPreprocessor = dataPreprocessor;  
   this->behaviorAnalyzer = behaviorAnalyzer;  
   this->threatAssessment = threatAssessment;  
   this->responseSystem = responseSystem;  
   this->machineLearning = machineLearning;  
   this->communication = communication;  

   // Вывод сообщения об успешном подключении модулей  
   std::cout << "Модули успешно подключены!" << std::endl;  
}

void CentralControlModule::configureSystemParameters() 
{
    std::cout << "Конфигурация системных параметров..." << std::endl;
}

void CentralControlModule::monitorModuleStatus() 
{
    std::cout << "Проверка состояний модулей..." << std::endl;
}

void CentralControlModule::adjustThreatLevels() 
{
    std::cout << "Обновление критериев оценки угроз..." << std::endl;
}

void CentralControlModule::generateSystemReport() 
{
    std::cout << "Создание системного отчёта..." << std::endl;
}

//Сбор данных  
void CentralControlModule::manageDataCollection()  
{  
   // Проверка, что dataCollector не равен nullptr  
   if (dataCollector)  
   {  
       dataCollector->sendToProcessing();  
   }  
}  

//Очистка и обработка данных  
void CentralControlModule::processAndAnalyzeData()  
{  
   // Проверка, что dataPreprocessor не равен nullptr  
   if (dataPreprocessor)  
   {  
       dataPreprocessor->cleanData();  
       dataPreprocessor->normalizeData();  
       dataPreprocessor->structureData();  
       dataPreprocessor->sendToAnalysis();  
   }  

   // Проверка, что behaviorAnalyzer не равен nullptr  
   if (behaviorAnalyzer)  
   {  
       behaviorAnalyzer->analyzeUserActions();  
       behaviorAnalyzer->detectToxicContent();  
       behaviorAnalyzer->identifyMaliciousSoftware();  
       behaviorAnalyzer->sendToThreatAssessment();  
   }  
}  

//Определение уровня угрозы и реагирование на них  
void CentralControlModule::assessThreats()  
{  
   // Проверка, что threatAssessment не равен nullptr  
   if (threatAssessment)  
   {  
       threatAssessment->evaluateThreatLevel();  
       threatAssessment->applyPredefinedModels();  
       threatAssessment->generateThreatReport();  
       threatAssessment->sendToResponseSystem();  
   }  

   // Проверка, что responseSystem не равен nullptr  
   if (responseSystem)  
   {  
       responseSystem->blockContent();  
       responseSystem->suspendAccount();  
       responseSystem->generateAlert();  
       responseSystem->logAction();  
   }  
}  

//Машинное обучение  
void CentralControlModule::updateMachineLearning()  
{  
   // Проверка, что machineLearning не равен nullptr  
   if (machineLearning)  
   {  
       machineLearning->trainModel();  
       machineLearning->updateAlgorithm();  
       machineLearning->evaluatePerformance();  
       machineLearning->deployNewModel();  
   }  
}  

//Уведомление пользователю и модераторам  
void CentralControlModule::communicateUserModer()  
{  
   // Проверка, что communication не равен nullptr  
   if (communication)  
   {  
       communication->notifyUser();  
       communication->sendReportToModerators();  
       communication->receiveModeratorFeedback();  
       communication->establishSecureConnection();  
   }  
}