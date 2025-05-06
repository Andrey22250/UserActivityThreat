#include "MetadataFactory.h"
#include <sstream>

std::unordered_map<std::string, MetadataShared*> MetadataFactory::cache;

MetadataShared* MetadataFactory::getMetadata(const std::string& key) {
    if (cache.find(key) == cache.end()) {
        // Пример: key = "Mobile|Europe"
        std::stringstream ss(key);
        std::string device, region;
        getline(ss, device, '|');
        getline(ss, region, '|');

        cache[key] = new MetadataShared(device, region);
    }
    return cache[key];
}

void MetadataFactory::cleanup() {
    for (auto& pair : cache) {
        delete pair.second;
    }
    cache.clear();
}