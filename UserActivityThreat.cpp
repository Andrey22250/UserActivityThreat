#include <iostream>
#include <windows.h>
#include "IControlCenter.h"
#include "UserActivityCollector.h"
#include "IThirdBehaviorAnalysis.h"
#include "LoggingDecorator.h"
#include "BehaviorAnalyzerAdapter.h"
#include "UserActivity.h"
#include "DataPreprocessingModule.h"
#include "MachineLearningModule.h"
#include "DataProcessorComposite.h"
#include "ActivityIterator.h"
#include "RetryDecorator.h"
#include "CompressionDecorator.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // --- Adapter Demo ---
    std::cout << "\n=== Adapter Demo ===\n";
    IThirdBehaviorAnalysis *legacyAnalyzer = nullptr;
    BehaviorAnalyzerAdapter adapter(legacyAnalyzer);
    adapter.analyzeBehavior();
    adapter.analyzeUserActions();

    // --- Decorator Demo ---
    std::cout << "\n=== Decorator Demo ===\n";
    UserActivityCollector* baseCollector = new UserActivityCollector("Лог действий", "Технические метаданные");
    IDataCollector* decoratedCollector = new LoggingDecorator(baseCollector);
    IDataCollector* retryDecoratedCollector = new RetryDecorator(baseCollector);
    IDataCollector* compressedDecoratedCollector = new CompressionDecorator(baseCollector);
    decoratedCollector->collectUserActions();
    decoratedCollector->collectMetadata();
    retryDecoratedCollector->sendToProcessing();
    compressedDecoratedCollector->sendToProcessing();

    // --- Composite Demo (Конвейер обработки данных) ---
    std::cout << "\n=== Composite (Pipeline) Demo ===\n";
    DataProcessorComposite pipeline;
    DataPreprocessingModule preprocessor;
    MachineLearningModule mlModule;

    pipeline.addComponent(&preprocessor);
    pipeline.addComponent(&mlModule);

    // Передаём данные через конвейер
    std::string rawData = "Сырые пользовательские данные";
    std::string processedData = pipeline.process(rawData);

    std::cout << "Итоговые данные после обработки: " << processedData << "\n";

    // --- Iterator Demo ---
    std::cout << "\n=== Iterator Demo ===\n";
    UserActivityCollector activityCollector("Открытие окна", "Время запуска");

    activityCollector.collectUserActions();
    activityCollector.collectMetadata();
    activityCollector.addActivity(UserActivity("click", "Button pressed"));
    activityCollector.addActivity(UserActivity("scroll", "Page scrolled"));

    ActivityIterator iterator(activityCollector.getActivities());
    while (iterator.hasNext()) {
        const auto& activity = iterator.next();
        std::cout << "Активность: [" << activity.getKey() << "] -> " << activity.getAction() << "\n";
    }

    // Очистка памяти
    delete decoratedCollector;

    return 0;
}