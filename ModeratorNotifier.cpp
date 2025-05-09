#include "ModeratorNotifier.h"

void ModeratorNotifier::update(const std::string& threatLevel) {
    std::cout << "[ModeratorNotifier] Внимание! Уровень угрозы изменён на: " << threatLevel << std::endl;
}