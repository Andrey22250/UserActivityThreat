#include "ModeratorCommunication.h"

void ModeratorCommunication::notifyUser() {
    std::cout << "Уведомление пользователя..." << std::endl;
}

void ModeratorCommunication::sendReportToModerators() {
    std::cout << "Отправка отчёта модерации..." << std::endl;
}

void ModeratorCommunication::receiveModeratorFeedback() {
    std::cout << "Получение обратной связи от модерации..." << std::endl;
}

void ModeratorCommunication::establishSecureConnection() {
    std::cout << "Установление защищённого соединения..." << std::endl;
}