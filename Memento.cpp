#include "Memento.h"

Memento::Memento(const std::string& level, const std::string& tag)
    : savedThreatLevel(level), savedBehaviorTag(tag) {
}

std::string Memento::getThreatLevel() const {
    return savedThreatLevel;
}

std::string Memento::getBehaviorTag() const {
    return savedBehaviorTag;
}