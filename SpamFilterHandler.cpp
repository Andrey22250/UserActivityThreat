#include "SpamFilterHandler.h"

void SpamFilterHandler::handle(const std::string& data) {
    if (data.find("spam") != std::string::npos) {
        std::cout << "[SpamFilter] Угроза обнаружена: спам контент.\n";
    }
    else if (next) {
        next->handle(data);
    }
}