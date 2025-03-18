#include "DataCollectorProxy.h"

DataCollectorProxy::DataCollectorProxy(IDataCollector* collector, bool access)
	: realCollector(collector), accessGranted(access) {
}

int DataCollectorProxy::collectUserActions() {
	if (accessGranted) {
		return realCollector->collectUserActions();
	}
	else {
		std::cout << "������ ������. ������ �� ����� ���� �������..." << std::endl;
		return -1; //������
	}
}

int DataCollectorProxy::collectMetadata() {
	if (accessGranted) {
		return realCollector->collectMetadata();
	}
	else {
		std::cout << "������ ������. ���������� �� ����� ���� �������..." << std::endl;
		return -1; //������
	}
}

int DataCollectorProxy::encryptData() {
	if (accessGranted) {
		return realCollector->encryptData();
	}
	else {
		std::cout << "������ ������. ������ �� ����� ���� �����������..." << std::endl;
		return -1; //������
	}
}

int DataCollectorProxy::sendToProcessing() {
	if (accessGranted) {
		return realCollector->sendToProcessing();
	}
	else {
		std::cout << "������ ������. ������ �� ����� ���� ���������� �� ���������..." << std::endl;
		return -1; // ������
	}
}