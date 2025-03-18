#pragma once
#include <string>
#include <iostream>
#include "ModeratorCommunication.h"
using namespace std;

class UserNotificationSystem : public ModeratorCommunication
{
private:
	int notificationCount; //счетчик отправленных уведомлений.
	bool isUrgentNotification; // флаг для срочных уведомлений.
public:
	static string notifyUserAuto(const string& notify);
};