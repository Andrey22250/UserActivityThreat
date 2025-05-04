#include "BehaviorAnalyzerAdapter.h"


BehaviorAnalyzerAdapter::BehaviorAnalyzerAdapter(IThirdBehaviorAnalysis* analyzer)
    : legacyAnalyzer(analyzer) {
}

void BehaviorAnalyzerAdapter::analyzeBehavior() {
    std::cout << "[Adapter] ����������� ������ analyzeBehavior() � analyzeLegacy()\n";
}

void BehaviorAnalyzerAdapter::analyzeUserActions()  {
    std::cout << "������ ���������������� �������� �� ��������� 2..." << std::endl;
}

void BehaviorAnalyzerAdapter::detectToxicContent() {
    std::cout << "����������� ���������� �������� �� ��������� 2..." << std::endl;
    detectedNewThreats++;
}

void BehaviorAnalyzerAdapter::identifyMaliciousSoftware() {
    std::cout << "����������� ������������ �� �� ��������� 2..." << std::endl;
}

void BehaviorAnalyzerAdapter::sendToThreatAssessment() {
    std::cout << "�������� ����������� ������� �� ������ �� ��������� 2..." << std::endl;
    analysisLog = "���������� �����: " + std::to_string(detectedNewThreats);
}