#include "DefaultHandler.h"

void DefaultHandler::handle(const std::string& data) {
    std::cout << "[DefaultHandler] Конкретной угрозы не обнаружено. Логирование данных: " << data << "\n";
}