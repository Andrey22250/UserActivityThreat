// ���� ��� ������ �������������� �������, ������� ������������ � �������� ����
#pragma once
#include "MLThreatAnalyzerFactory.h"
#include "RuleBasedThreatAnalyzerFactory.h"
#include "WebPlatformFactory.h"
#include "MobilePlatformFactory.h"
// ��� ������� �������� ����� �������, ������ ���������� ����� �� � �������� � ���� analyze()
void runAnalysis(ThreatAnalyzerFactory* factory) {
    IThreatAnalyzer* analyzer = factory->createAnalyzer();
    analyzer->analyze();
    delete analyzer;
}
// ��� ������� �������� ����� �������, ������ ������� ����� �� � �������� � �� ������ ��������� ����������� ������� ����������� � �� 
//���������� �������� � ����, �� ����, ��� ��� ��� ���������
void runSystem(IPlatformFactory* factory) {
    std::unique_ptr<ILogger> logger(factory->createLogger());
    std::unique_ptr<IDataCollectorNew> collector(factory->createDataCollector());
    std::unique_ptr<INotificationSystem> notifier(factory->createNotificationSystem());

    logger->log("������� ����������������.");
    collector->collectData("User123 ����� �� �������.");
    notifier->notifyUser("���� �������� ������ ������ �����.");
}