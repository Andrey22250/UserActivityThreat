#include "IDataPreprocessor.h"

class DataPreprocessingComponent {
private:
    IDataPreprocessor* processor;
public:
    DataPreprocessingComponent(IDataPreprocessor* processor);
    void process(const std::string& data);
};