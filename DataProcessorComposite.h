#pragma once
#include "IDataProcessorComponent.h"
#include <vector>

class DataProcessorComposite : public IDataProcessorComponent {
private:
    std::vector<IDataProcessorComponent*> components;
public:
    void addComponent(IDataProcessorComponent* component);
    std::string process(const std::string& input) override;
};