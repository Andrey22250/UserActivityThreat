#pragma once
#include <string>

class MetadataShared {
private:
    std::string deviceType;
    std::string region;
public:
    MetadataShared(const std::string& deviceType, const std::string& region);
    std::string getDeviceType() const;
    std::string getRegion() const;
};