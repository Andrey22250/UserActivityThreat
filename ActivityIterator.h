#pragma once
#include "IActivityIterator.h"
#include <vector>
#include "UserActivityCollector.h"

// Конкретный итератор
class ActivityIterator : public IActivityIterator {
private:
    std::vector<UserActivity> activities;
    size_t position;
public:
    ActivityIterator(const std::vector<UserActivity>& data);
    bool hasNext() const override;
    UserActivity next() override;
};