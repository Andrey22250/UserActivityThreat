#pragma once
#include "IHandler.h"
#include <iostream>

class AnomalyDetectionHandler : public IHandler {
public:
    void handle(const std::string& data) override;
};