#pragma once
#include "IObserver.h"
#include <iostream>

class LogSystem : public IObserver {
public:
    void update(const std::string& threatLevel) override;
};