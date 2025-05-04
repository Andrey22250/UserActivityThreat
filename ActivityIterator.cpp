#include "ActivityIterator.h"

ActivityIterator::ActivityIterator(const std::vector<UserActivity>& data)
    : activities(data), position(0) {
}

bool ActivityIterator::hasNext() const {
    return position < activities.size();
}

UserActivity ActivityIterator::next() {
    return activities[position++];
}