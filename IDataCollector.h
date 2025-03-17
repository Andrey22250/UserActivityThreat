#pragma once
#include <string>
#include <iostream>

using namespace std;

class IDataCollector
{
	public:
		//���������� ���������� ����� ������
		virtual int collectUserActions() = 0;
		
		//���������� ���������� ����� ����������
		virtual int collectMetadata() = 0;
		
		//���������� ���������� ���������� ������
		virtual int encryptData() = 0;
		
		//���������� ���������� ������ ��� ��������������� ���������
		virtual int sendToProcessing() = 0;
};
