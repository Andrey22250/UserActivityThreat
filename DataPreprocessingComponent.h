//Абстракция, использующая интерфейс IDataPreprocessor для выполнения обработки входных данных. Позволяет легко переключать стратегию обработки между текстом, аудио и фото
#include "IDataPreprocessor.h"

class DataPreprocessingComponent {
private:
    IDataPreprocessor* processor;
public:
    DataPreprocessingComponent(IDataPreprocessor* processor);
    void process(const std::string& data);
};