#pragma once
#include <string>
#include "Memento.h"

class UserSecurityProfile {
private:
    std::string threatLevel;
    std::string behaviorTag;

public:
    UserSecurityProfile(const std::string& threat, const std::string& tag);

    void setThreatLevel(const std::string& level);
    void setBehaviorTag(const std::string& tag);
    std::string getThreatLevel() const;
    std::string getBehaviorTag() const;

    Memento* save() const;
    void restore(Memento* memento);

    void print() const;
};