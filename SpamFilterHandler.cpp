#include "SpamFilterHandler.h"

void SpamFilterHandler::handle(const std::string& data) {
    if (data.find("spam") != std::string::npos) {
        std::cout << "[SpamFilter] ������ ����������: ���� �������.\n";
    }
    else if (next) {
        next->handle(data);
    }
}