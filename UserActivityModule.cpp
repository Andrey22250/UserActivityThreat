#include "UserActivityModule.h"
#include "IDataProcessingVisitor.h"
#include <iostream>

void UserActivityModule::processActivity() {
    std::cout << "[UserActivityModule] Обработка действий пользователя\n";
}

void UserActivityModule::accept(IDataProcessingVisitor& visitor) {
    visitor.visit(*this);
}