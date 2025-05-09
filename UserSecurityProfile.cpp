#include "UserSecurityProfile.h"
#include <iostream>

UserSecurityProfile::UserSecurityProfile(const std::string& threat, const std::string& tag)
    : threatLevel(threat), behaviorTag(tag) {
}

void UserSecurityProfile::setThreatLevel(const std::string& level) {
    threatLevel = level;
}

void UserSecurityProfile::setBehaviorTag(const std::string& tag) {
    behaviorTag = tag;
}

std::string UserSecurityProfile::getThreatLevel() const {
    return threatLevel;
}

std::string UserSecurityProfile::getBehaviorTag() const {
    return behaviorTag;
}

Memento* UserSecurityProfile::save() const {
    return new Memento(threatLevel, behaviorTag);
}

void UserSecurityProfile::restore(Memento* memento) {
    threatLevel = memento->getThreatLevel();
    behaviorTag = memento->getBehaviorTag();
}

void UserSecurityProfile::print() const {
    std::cout << "Уровень угрозы: " << threatLevel << ", Тэг поведения: " << behaviorTag << std::endl;
}