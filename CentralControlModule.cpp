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

    std::cout << "������ ������� ����������!" << std::endl;
}

void CentralControlModule::configureSystemParameters() {
    std::cout << "������������ ��������� ����������..." << std::endl;
}

void CentralControlModule::monitorModuleStatus() {
    std::cout << "�������� ��������� �������..." << std::endl;
}

void CentralControlModule::adjustThreatLevels() {
    std::cout << "���������� ��������� ������ �����..." << std::endl;
}

void CentralControlModule::generateSystemReport() {
    std::cout << "�������� ���������� ������..." << std::endl;
}

//���� ������
void CentralControlModule::manageDataCollection() {
    if (dataCollector) {
        dataCollector->sendToProcessing();
    }
}

//������� � ��������� ������
void CentralControlModule::processAndAnalyzeData() {
    if (dataPreprocessor) {
        dataPreprocessor->cleanData();
        dataPreprocessor->normalizeData();
        dataPreprocessor->structureData();
        dataPreprocessor->sendToAnalysis();
    }

    if (behaviorAnalyzer) {
        behaviorAnalyzer->analyzeUserActions();
        behaviorAnalyzer->detectToxicContent();
        behaviorAnalyzer->identifyMaliciousSoftware();
        behaviorAnalyzer->sendToThreatAssessment();
    }
}
//����������� ������ ������ � ������������ �� ���
void CentralControlModule::assessThreats() {
    if (threatAssessment) {
        threatAssessment->evaluateThreatLevel();
        threatAssessment->applyPredefinedModels();
        threatAssessment->generateThreatReport();
        threatAssessment->sendToResponseSystem();
    }
    if (responseSystem) {
        responseSystem->blockContent();
        responseSystem->suspendAccount();
        responseSystem->generateAlert();
        responseSystem->logAction();
    }
}

//�������� ��������
void CentralControlModule::updateMachineLearning() {
    if (machineLearning) {
        machineLearning->trainModel();
        machineLearning->updateAlgorithm();
        machineLearning->evaluatePerformance();
        machineLearning->deployNewModel();
    }
}