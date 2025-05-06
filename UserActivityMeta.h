#pragma once
#include "MetadataShared.h"
#include <string>

class UserActivityMeta {
private:
    MetadataShared* metadata;
    std::string userData;
public:
    UserActivityMeta(MetadataShared* metadata, const std::string& userData);
    void printActivity() const;
};