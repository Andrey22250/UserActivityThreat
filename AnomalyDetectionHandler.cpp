#include "AnomalyDetectionHandler.h"

void AnomalyDetectionHandler::handle(const std::string& data) {
    if (data.find("suspicious") != std::string::npos) {
        std::cout << "[AnomalyDetector] ���������� �������������� ���������.\n";
    }
    else if (next) {
        next->handle(data);
    }
}