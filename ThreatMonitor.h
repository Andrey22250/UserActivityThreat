#pragma once
#include <vector>
#include <string>
#include "IObserver.h"

class ThreatMonitor {
private:
    std::vector<IObserver*> observers;
    std::string threatLevel;

public:
    void addObserver(IObserver* observer);
    void removeObserver(IObserver* observer);
    void setThreatLevel(const std::string& level);
    void notifyObservers();
};