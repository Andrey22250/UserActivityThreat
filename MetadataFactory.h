#pragma once
#include "MetadataShared.h"
#include <unordered_map>
#include <string>

class MetadataFactory {
private:
    static std::unordered_map<std::string, MetadataShared*> cache;
public:
    static MetadataShared* getMetadata(const std::string& key);
    static void cleanup(); // очистка кэша при завершении
};