#include "AutomatedResponseSystem.h"

int AutomatedResponseSystem::alertCount = 0;

void AutomatedResponseSystem::blockContent() {
    std::cout << "Блокирование контента..." << std::endl;
}

void AutomatedResponseSystem::suspendAccount() {
    std::cout << "Блокировка аккаунта..." << std::endl;
}

void AutomatedResponseSystem::generateAlert() {
    std::cout << "Формирование уведомления..." << std::endl;
    alertCount++;
}

void AutomatedResponseSystem::logAction() {
    std::cout << "Запись принятых мер..." << std::endl;
	responseLog = "Действия зафиксированы.";
}