#pragma once
#include "IObserver.h"
#include <iostream>

class ModeratorNotifier : public IObserver {
public:
    void update(const std::string& threatLevel) override;
};