#pragma once
#include "IHandler.h"
#include <iostream>

class SpamFilterHandler : public IHandler {
public:
    void handle(const std::string& data) override;
};