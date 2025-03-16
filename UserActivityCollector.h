#pragma once
#include "IDataCollector.h"

class UserActivityCollector: public IDataCollector
{
private:
	string collect;		//������ ��� ����� ������
	string metadata;
	string encrypted_data;		//������ ��� ������������� ������
	string encrypted_metadata;
public:
	UserActivityCollector(string datas, string metadata);

	//����������� ���������� ����� ������
	int collectUserActions() override;
	//���������� ���������� ����� ����������
	int collectMetadata() override;
	//���������� ���������� ���������� ������
	int encryptData() override;
	//���������� ���������� ������ ��� ��������������� ���������
	int sendToProcessing() override;
};