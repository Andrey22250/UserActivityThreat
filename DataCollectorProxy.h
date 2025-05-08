//�����-������ ��� IDataCollector, ������� ��������� �������� ������� ����� ������� �������� ������� ����� ������ (������ � ������ � �������). 
//���� ������� �� �������������, ������ ������������� ���������� �������.
#pragma once
#include "IDataCollector.h"
#include <iostream>

//   �����-����������� ��� IDataCollector
class DataCollectorProxy : public IDataCollector
{
private:
    IDataCollector* realCollector; // ������������ ������
    bool accessGranted;            // ������ ��������������� �������

public:
    // �����������, ����������� ������������ ������ � ������� �������
    DataCollectorProxy(IDataCollector* collector, bool access);

    // ��������������� ������ ��� ����� ���������������� ��������
    int collectUserActions() override;

    // ��������������� ������ ��� ����� ����������
    int collectMetadata() override;

    // ��������������� ������ ��� ���������� ������
    int encryptData() override;

    // ��������������� ������ ��� �������� ������ �� ���������
    int sendToProcessing() override;
};