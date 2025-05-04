#pragma once
#include <vector>
#include "IDataCollector.h"
#include "UserActivity.h"
#include "MetadataEncryptor.h"

class UserActivityCollector : public IDataCollector
{
private:
	string collect;		//������ ��� ����� ������
	string metadata;
	string encrypted_data;		//������ ��� ������������� ������
	string encrypted_metadata;
	std::vector<UserActivity> activities;
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

	void addActivity(const UserActivity& activity);
	const std::vector<UserActivity>& getActivities() const;
};