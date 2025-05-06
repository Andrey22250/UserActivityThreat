#include "MetadataShared.h"

MetadataShared::MetadataShared(const std::string& deviceType, const std::string& region)
    : deviceType(deviceType), region(region) {
}

std::string MetadataShared::getDeviceType() const {
    return deviceType;
}

std::string MetadataShared::getRegion() const {
    return region;
}