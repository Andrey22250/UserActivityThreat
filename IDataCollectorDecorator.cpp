#include "IDataCollectorDecorator.h"


IDataCollectorDecorator::IDataCollectorDecorator(IDataCollector* collector)
    : wrapped(collector) {
}

int IDataCollectorDecorator::collectUserActions() {
    wrapped->collectUserActions();
	return 0;
}

int IDataCollectorDecorator::collectMetadata() {
    wrapped->collectMetadata();
	return 0;
}

int IDataCollectorDecorator::encryptData()
{
	wrapped->encryptData();
	return 0;
}

int IDataCollectorDecorator::sendToProcessing()
{
	wrapped->sendToProcessing();
	return 0;
}