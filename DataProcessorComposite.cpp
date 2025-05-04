#include "DataProcessorComposite.h"

void DataProcessorComposite::addComponent(IDataProcessorComponent* component) {
    components.push_back(component);
}

std::string DataProcessorComposite::process(const std::string& input) {
    std::string result = input;
    for (auto* component : components) {
        result = component->process(result);
    }
    return result;
}