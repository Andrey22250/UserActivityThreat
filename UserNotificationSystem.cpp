#include "UserNotificationSystem.h"

string UserNotificationSystem::notifyUserAuto(const string& notify) {
    string notification = "Причина блокировки: " + notify;
    return notification; //Уведомление пользователю
}