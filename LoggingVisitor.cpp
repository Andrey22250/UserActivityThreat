#include "LoggingVisitor.h"
#include "UserActivityModule.h"
#include "ThreatDetectionComponent.h"
#include <iostream>

void LoggingVisitor::visit(UserActivityModule& module) {
    std::cout << "[LoggingVisitor] ����������� ���������������� ����������\n";
    module.processActivity();
}

void LoggingVisitor::visit(ThreatDetectionComponent& module) {
    std::cout << "[LoggingVisitor] ����������� ����������� �����\n";
    module.detectThreats();
}