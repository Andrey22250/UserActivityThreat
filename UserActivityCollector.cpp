#include "UserActivityCollector.h"

UserActivityCollector::UserActivityCollector(string datas, string metadata)
{
	this->collect = datas;
	this->metadata = metadata;
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
		encrypted_data = MetadataEncryptor::encrypt(collect, '9');
		encrypted_metadata = MetadataEncryptor::encrypt(metadata, '7');
	}
	cout << "Данные зашифрованы успешно..." << endl;
}

int UserActivityCollector::sendToProcessing()
{
	if (encryptData() == -1)
		return -1;
}