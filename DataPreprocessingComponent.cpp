#include "DataPreprocessingComponent.h"

DataPreprocessingComponent::DataPreprocessingComponent(IDataPreprocessor* processor)
    : processor(processor) {
}

void DataPreprocessingComponent::process(const std::string& data) {
    processor->preprocess(data);
}