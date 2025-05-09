#include "LogSystem.h"

void LogSystem::update(const std::string& threatLevel) {
    std::cout << "[LogSystem] Логирование изменения уровня опасности: " << threatLevel << std::endl;
}