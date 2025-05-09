#pragma once
class IDataProcessingVisitor;

class IVisitableModule {
public:
	virtual void accept(IDataProcessingVisitor& visitor) = 0;
};