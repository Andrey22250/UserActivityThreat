#pragma once
#include <string>
#include <iostream>

using namespace std;

class IDataCollector
{
	public:
		//Возвращает готовность сбора данных
		virtual int collectUserActions() = 0;
		
		//Возвращает готовность сбора метаданных
		virtual int collectMetadata() = 0;
		
		//Возвращает готовность шифрования данных
		virtual int encryptData() = 0;
		
		//Возвращает готовность данных для предварительной обработки
		virtual int sendToProcessing() = 0;
};
