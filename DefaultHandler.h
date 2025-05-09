#pragma once
#include "IHandler.h"
#include <iostream>

class DefaultHandler : public IHandler {
public:
    void handle(const std::string& data) override;
};