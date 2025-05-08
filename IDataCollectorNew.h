#pragma once
#include <string>

class IDataCollectorNew {
public:
    virtual void collectData(const std::string& data) = 0;
};

