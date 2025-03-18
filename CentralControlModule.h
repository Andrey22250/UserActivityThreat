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
    void initializeModules(     //������������� �����������
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
    void manageDataCollection();    //���� ������
    void processAndAnalyzeData();   //������ ���� ������
    void assessThreats();           //������������ �� ������
    void updateMachineLearning();   //�������� ��������
    void communicateUserModer();    //����������� ���������� � ������������
};

