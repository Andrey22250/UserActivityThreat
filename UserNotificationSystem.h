#pragma once
#include <string>
#include <iostream>

using namespace std;

class UserNotificationSystem
{
private:
	int notificationCount; //счетчик отправленных уведомлений.
	bool isUrgentNotification; // флаг для срочных уведомлений.
public:
	static string notifyUserAuto(const string& notify);
};

