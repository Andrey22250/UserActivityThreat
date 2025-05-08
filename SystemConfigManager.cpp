#include "SystemConfigManager.h"

SystemConfigManager* SystemConfigManager::instance = nullptr;

SystemConfigManager::SystemConfigManager()
    : enableLogging(true), useMachineLearning(false), threatLevel(1) {
}

SystemConfigManager* SystemConfigManager::getInstance() {
    if (!instance) {
        instance = new SystemConfigManager();
    }
    return instance;
}

bool SystemConfigManager::isLoggingEnabled() const {
    return enableLogging;
}

bool SystemConfigManager::isMachineLearningEnabled() const {
    return useMachineLearning;
}

int SystemConfigManager::getThreatLevel() const {
    return threatLevel;
}

void SystemConfigManager::setLoggingEnabled(bool value) {
    enableLogging = value;
}

void SystemConfigManager::setMachineLearningEnabled(bool value) {
    useMachineLearning = value;
}

void SystemConfigManager::setThreatLevel(const int& level) {
    threatLevel = level;
}