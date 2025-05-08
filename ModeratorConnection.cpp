#include "ModeratorConnection.h"

void ModeratorConnection::sendAlert(const std::string& message) {
    std::cout << "Отправка уведомления модератору: " << message << std::endl;
}