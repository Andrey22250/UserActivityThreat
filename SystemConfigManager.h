//�����, ���������� ��������� � ��������������� ���������� ������ � ���
#pragma once
#include <string>

class SystemConfigManager {
private:
    static SystemConfigManager* instance;
    bool enableLogging;
    bool useMachineLearning;
    int threatLevel;

    // ��������� �����������
    SystemConfigManager();

public:
    static SystemConfigManager* getInstance();

    // ������ ������� � ��������� ��������
    bool isLoggingEnabled() const;
    bool isMachineLearningEnabled() const;
    int getThreatLevel() const;

    void setLoggingEnabled(bool value);
    void setMachineLearningEnabled(bool value);
    void setThreatLevel(const int& level);
};