#include "ThreatClassificationModule.h"

void ThreatClassificationModule::evaluateThreatLevel() {
	srand(time(0)); // ������������� ���������� ��������� �����
    std::cout << "����������� ������ ������..." << std::endl;
	threatLevel = rand() % 10 + 1; // ��������� ���������� ������ ������ �� 1 �� 10
}

void ThreatClassificationModule::applyPredefinedModels() {
    std::cout << "���������� ������ ������ ���������..." << std::endl;
	responseStrategy = "��������� ������������ �� ������� " + std::to_string(threatLevel); // ������ ��������� ������������
}

void ThreatClassificationModule::generateThreatReport() {
    std::cout << "��������� ������ � ������������..." << std::endl;
}

void ThreatClassificationModule::sendToResponseSystem() {
    std::cout << "�������� ������ �� ������� ������������..." << std::endl;
}