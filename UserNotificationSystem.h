#pragma once
#include <string>
#include <iostream>

using namespace std;

class UserNotificationSystem
{
private:
	int notificationCount; //������� ������������ �����������.
	bool isUrgentNotification; // ���� ��� ������� �����������.
public:
	static string notifyUserAuto(const string& notify);
};

