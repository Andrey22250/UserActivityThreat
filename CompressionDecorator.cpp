#include "CompressionDecorator.h"
CompressionDecorator::CompressionDecorator(IDataCollector* collector)
    : IDataCollectorDecorator(collector) {
}

int CompressionDecorator::sendToProcessing() {
    wrapped->sendToProcessing();
    std::cout << "[CompressionDecorator] ������ ������ ����� ���������...\n";
    return 1;
}