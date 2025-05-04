#include "UserActivity.h"

UserActivity::UserActivity(const std::string& key, const std::string& action)
    : key(key), action(action) {
}

std::string UserActivity::getKey() const {
    return key;
}

std::string UserActivity::getAction() const {
    return action;
}