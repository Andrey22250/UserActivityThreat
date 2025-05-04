#include "RetryDecorator.h"

RetryDecorator::RetryDecorator(IDataCollector* collector, int retries, int delay)
    : IDataCollectorDecorator(collector), maxRetries(retries), delayMs(delay) {
}

int RetryDecorator::sendToProcessing() {
    int attempt = 0;
    int result = 1;
    while (attempt < maxRetries) {
        result = wrapped->sendToProcessing();
        if (result != 1) {
            std::cout << "[RetryDecorator] �������� ��������� ������� " << (attempt + 1) << std::endl;
            return 0;
        }
        std::cout << "[RetryDecorator]������ �������� " << (attempt + 1) << ", ������ ��������...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
        attempt++;
    }
    std::cout << "[RetryDecorator]��� ������� ��������.\n";
    return result;
}