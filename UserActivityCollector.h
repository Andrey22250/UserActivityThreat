#pragma once
#include "IDataCollector.h"

class UserActivityCollector: public IDataCollector
{
private:
	string collect;		//Строка для сбора данных
	string metadata;
	string encrypted_data;		//Строка для зашифрованыых данных
	string encrypted_metadata;
public:
	UserActivityCollector(string datas, string metadata);

	//Возваращает готовность сбора данных
	int collectUserActions() override;
	//Возвращает готовность сбора метаданных
	int collectMetadata() override;
	//Возвращает готовность шифрования данных
	int encryptData() override;
	//Возвращает готовность данных для предварительной обработки
	int sendToProcessing() override;
};