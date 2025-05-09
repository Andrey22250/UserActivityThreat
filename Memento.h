#pragma once
#include <string>

class Memento {
private:
    std::string savedThreatLevel;
    std::string savedBehaviorTag;

public:
    Memento(const std::string& level, const std::string& tag);
    std::string getThreatLevel() const;
    std::string getBehaviorTag() const;
};