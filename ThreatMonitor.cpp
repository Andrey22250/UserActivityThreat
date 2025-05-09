#include "ThreatMonitor.h"

void ThreatMonitor::addObserver(IObserver* observer) {
    observers.push_back(observer);
}

void ThreatMonitor::removeObserver(IObserver* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void ThreatMonitor::setThreatLevel(const std::string& level) {
    threatLevel = level;
    notifyObservers();
}

void ThreatMonitor::notifyObservers() {
    for (auto observer : observers) {
        observer->update(threatLevel);
    }
}