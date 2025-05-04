#pragma once
#include "IDataCollector.h"

// Интерфейс для декораторов коллектора
class IDataCollectorDecorator : public IDataCollector {
protected:
    IDataCollector* wrapped;
public:
    IDataCollectorDecorator(IDataCollector* collector);
    virtual int collectUserActions() override;
    virtual int collectMetadata() override;
	virtual int encryptData() override;
	virtual int sendToProcessing() override;
};