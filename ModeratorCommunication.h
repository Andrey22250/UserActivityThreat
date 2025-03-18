#pragma once
#include "ICommunication.h"
#include "UserNotificationSystem.h"
#include <iostream>
#include <ctime>

class ModeratorCommunication : public ICommunication
{
private:
    int messagePriority; //��������� ����������� (1 � �������, 3 � ������)
	std::string moderatorContact; //���������� ������ ����������
	string notify; //����������� ��� ������������
public:
	ModeratorCommunication(string notify); //�����������
    void notifyUser() override;
    void sendReportToModerators() override;
    void receiveModeratorFeedback() override;
    void establishSecureConnection() override;
};

