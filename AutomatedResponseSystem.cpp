#include "AutomatedResponseSystem.h"

int AutomatedResponseSystem::alertCount = 0;

void AutomatedResponseSystem::blockContent() {
    std::cout << "������������ ��������..." << std::endl;
}

void AutomatedResponseSystem::suspendAccount() {
    std::cout << "���������� ��������..." << std::endl;
}

void AutomatedResponseSystem::generateAlert() {
    std::cout << "������������ �����������..." << std::endl;
    alertCount++;
}

void AutomatedResponseSystem::logAction() {
    std::cout << "������ �������� ���..." << std::endl;
	responseLog = "�������� �������������.";
}