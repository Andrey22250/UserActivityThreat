#include "LoggingVisitor.h"
#include "UserActivityModule.h"
#include "ThreatDetectionComponent.h"
#include <iostream>

void LoggingVisitor::visit(UserActivityModule& module) {
    std::cout << "[LoggingVisitor] Логирование пользовательской активности\n";
    module.processActivity();
}

void LoggingVisitor::visit(ThreatDetectionComponent& module) {
    std::cout << "[LoggingVisitor] Логирование обнаружения угроз\n";
    module.detectThreats();
}