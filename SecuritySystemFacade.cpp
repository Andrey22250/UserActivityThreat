#include "SecuritySystemFacade.h"

SecuritySystemFacade::SecuritySystemFacade() {
    controlModule = new CentralControlModule();
    // ����� ����� �������� ������������� �������, ���� �����
}

SecuritySystemFacade::~SecuritySystemFacade() {
    delete controlModule;
}

void SecuritySystemFacade::runFullCheck() {
    std::cout << "[LOG] ������ ����� ������...\n";
    controlModule->manageDataCollection();
    std::cout << "[LOG] ������ �������.\n";

    std::cout << "[LOG] ������ ������� � ��������� ������...\n";
    controlModule->processAndAnalyzeData();
    std::cout << "[LOG] ������ ���������� �������.\n";

    std::cout << "[LOG] ������ ����������� ��������� ������...\n";
    controlModule->assessThreats();
    std::cout << "[LOG] ������ ������ ��������.\n";

    std::cout << "[LOG] ������ ����� � ����������...\n";
    controlModule->communicateUserModer();
    std::cout << "[LOG] ���� �������.\n";
}