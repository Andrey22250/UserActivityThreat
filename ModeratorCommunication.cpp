#include "ModeratorCommunication.h"

ModeratorCommunication::ModeratorCommunication(string notify)
{
    this->notify = notify;
}

void ModeratorCommunication::notifyUser() 
{
    std::cout << UserNotificationSystem::notifyUserAuto(notify) << std::endl;
}

void ModeratorCommunication::sendReportToModerators() 
{
    std::cout << "�������� ������ ���������..." << std::endl;
}

void ModeratorCommunication::receiveModeratorFeedback() 
{
    std::cout << "��������� �������� ����� �� ���������..." << std::endl;
}

void ModeratorCommunication::establishSecureConnection() 
{
    std::cout << "������������ ����������� ����������..." << std::endl;
}