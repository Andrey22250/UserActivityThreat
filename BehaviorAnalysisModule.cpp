#include "BehaviorAnalysisModule.h"

int BehaviorAnalysisModule::detectedThreats = 0;

void BehaviorAnalysisModule::analyzeUserActions() {
    std::cout << "������ ���������������� ��������..." << std::endl;
}

void BehaviorAnalysisModule::detectToxicContent() {
    std::cout << "����������� ���������� ��������..." << std::endl;
	detectedThreats++;
}

void BehaviorAnalysisModule::identifyMaliciousSoftware() {
    std::cout << "����������� ������������ ��..." << std::endl;
}

void BehaviorAnalysisModule::sendToThreatAssessment() {
    std::cout << "�������� ����������� ������� �� ������..." << std::endl;
	analysisLog = "���������� �����: " + std::to_string(detectedThreats);
}