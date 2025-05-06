#include "UserActivityMeta.h"
#include <iostream>

UserActivityMeta::UserActivityMeta(MetadataShared* metadata, const std::string& userData)
    : metadata(metadata), userData(userData) {
}

void UserActivityMeta::printActivity() const {
    std::cout << "[Activity] " << userData
        << " | Device: " << metadata->getDeviceType()
        << ", Region: " << metadata->getRegion() << std::endl;
}