#pragma once
#include "IVisitableModule.h"

class UserActivityModule : public IVisitableModule {
public:
    void processActivity();
    void accept(IDataProcessingVisitor& visitor) override;
};