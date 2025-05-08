//Класс, содержащий настройки и предоставляющий глобальный доступ к ним
#pragma once
#include <string>

class SystemConfigManager {
private:
    static SystemConfigManager* instance;
    bool enableLogging;
    bool useMachineLearning;
    int threatLevel;

    // Приватный конструктор
    SystemConfigManager();

public:
    static SystemConfigManager* getInstance();

    // Методы доступа и изменения настроек
    bool isLoggingEnabled() const;
    bool isMachineLearningEnabled() const;
    int getThreatLevel() const;

    void setLoggingEnabled(bool value);
    void setMachineLearningEnabled(bool value);
    void setThreatLevel(const int& level);
};