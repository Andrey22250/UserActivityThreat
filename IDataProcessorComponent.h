#pragma once
#include <string>

class IDataProcessorComponent {
public:
    virtual ~IDataProcessorComponent() = default;
    virtual std::string process(const std::string& input) = 0;
};