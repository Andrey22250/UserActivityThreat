#include "ModeratorCommunication.h"

ModeratorCommunication::ModeratorCommunication(string notify)
{
    this->notify = notify;
    srand(time(NULL)); // Инициализация генератора случайных чисел
    this->messagePriority = std::rand() % 3 + 1; // Генерация случайного приоритета от 1 до 3
}

void ModeratorCommunication::notifyUser() 
{
    std::cout << UserNotificationSystem::notifyUserAuto(notify) << std::endl;
}

void ModeratorCommunication::sendReportToModerators() 
{
    std::cout << "Отправка отчёта модерации на пользователя..." << moderatorContact << "\nПриоритет сообщения:" << messagePriority << std::endl;
}

void ModeratorCommunication::receiveModeratorFeedback() 
{
    std::cout << "Получение обратной связи от модерации..." << std::endl;
}

void ModeratorCommunication::establishSecureConnection() 
{
    std::cout << "Установление защищённого соединения..." << std::endl;
}