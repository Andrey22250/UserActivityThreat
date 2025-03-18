#include "ModeratorCommunication.h"

ModeratorCommunication::ModeratorCommunication(string notify)
{
    this->notify = notify;
    srand(time(NULL)); // ������������� ���������� ��������� �����
    this->messagePriority = std::rand() % 3 + 1; // ��������� ���������� ���������� �� 1 �� 3
}

void ModeratorCommunication::notifyUser() 
{
    std::cout << UserNotificationSystem::notifyUserAuto(notify) << std::endl;
}

void ModeratorCommunication::sendReportToModerators() 
{
    std::cout << "�������� ������ ��������� �� ������������..." << moderatorContact << "\n��������� ���������:" << messagePriority << std::endl;
}

void ModeratorCommunication::receiveModeratorFeedback() 
{
    std::cout << "��������� �������� ����� �� ���������..." << std::endl;
}

void ModeratorCommunication::establishSecureConnection() 
{
    std::cout << "������������ ����������� ����������..." << std::endl;
}