#pragma once
#include <string>
#include <iostream>
#include "ModeratorCommunication.h"
using namespace std;

class UserNotificationSystem : public ModeratorCommunication
{
private:
	int notificationCount; //������� ������������ �����������.
	bool isUrgentNotification; // ���� ��� ������� �����������.
public:
	static string notifyUserAuto(const string& notify);
};