#include "UserActivityCollector.h"

UserActivityCollector::UserActivityCollector(string datas, string metadata)
{
	this->collect = datas;
	this->metadata = metadata;
	this->encrypted_data = datas;
	this->encrypted_metadata = metadata;
}

int UserActivityCollector::collectUserActions()
{
	if (collect != "\0")
		cout << "Данные собраны успешно..." << endl;
	else
		return -1;
}

int UserActivityCollector::collectMetadata()
{
	if (metadata != "\0")
		cout << "Метаданные собраны успешно..." << endl;
	else
		return -1;
}

int UserActivityCollector::encryptData()
{
	if (collectUserActions() == -1 || collectMetadata() == -1)
		return -1;
	else
	{
		for (int i = 0; i < this->collect.size(); i++)
		{
			this->encrypted_data[i] = this->collect[i] ^ '9';
		}
		for (int i = 0; i < this->metadata.size(); i++)
		{
			this->encrypted_metadata[i] = this->metadata[i] ^ '7';
		}
	}
	cout << "Данные зашифрованы успешно..." << endl;
}

int UserActivityCollector::sendToProcessing()
{
	if (encryptData() == -1)
		return -1;
}