#include "DataCollectorProxy.h"

DataCollectorProxy::DataCollectorProxy(IDataCollector* collector, bool access)
	: realCollector(collector), accessGranted(access) {
}

int DataCollectorProxy::collectUserActions() {
	if (accessGranted) {
		return realCollector->collectUserActions();
	}
	else {
		std::cout << "Доступ закрыт. Данные не могут быть собраны..." << std::endl;
		return -1; //Ошибка
	}
}

int DataCollectorProxy::collectMetadata() {
	if (accessGranted) {
		return realCollector->collectMetadata();
	}
	else {
		std::cout << "Доступ закрыт. Метаданные не могут быть собраны..." << std::endl;
		return -1; //Ошибка
	}
}

int DataCollectorProxy::encryptData() {
	if (accessGranted) {
		return realCollector->encryptData();
	}
	else {
		std::cout << "Доступ закрыт. Данные не могут быть зашифрованы..." << std::endl;
		return -1; //Ошибка
	}
}

int DataCollectorProxy::sendToProcessing() {
	if (accessGranted) {
		return realCollector->sendToProcessing();
	}
	else {
		std::cout << "Доступ закрыт. Данные не могут быть отправлены на обработку..." << std::endl;
		return -1; // Ошибка
	}
}