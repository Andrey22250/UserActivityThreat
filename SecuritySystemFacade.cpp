#include "SecuritySystemFacade.h"

SecuritySystemFacade::SecuritySystemFacade() {
    controlModule = new CentralControlModule();
    // Здесь можно вызывать инициализацию модулей, если нужно
}

SecuritySystemFacade::~SecuritySystemFacade() {
    delete controlModule;
}

void SecuritySystemFacade::runFullCheck() {
    std::cout << "[LOG] Начало сбора данных...\n";
    controlModule->manageDataCollection();
    std::cout << "[LOG] Данные собраны.\n";

    std::cout << "[LOG] Начало анализа и обработки данных...\n";
    controlModule->processAndAnalyzeData();
    std::cout << "[LOG] Данные обработаны успешно.\n";

    std::cout << "[LOG] Начало определения опасности угрозы...\n";
    controlModule->assessThreats();
    std::cout << "[LOG] Анализ угрозы завершён.\n";

    std::cout << "[LOG] Начало связи с модерацией...\n";
    controlModule->communicateUserModer();
    std::cout << "[LOG] Меры приняты.\n";
}