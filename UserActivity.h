#pragma once
#include <string>

class UserActivity {
private:
    std::string key;
    std::string action;
public:
    UserActivity(const std::string& key, const std::string& action);

    std::string getKey() const;
    std::string getAction() const;
};