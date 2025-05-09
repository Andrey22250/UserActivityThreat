#include "UserActivityModule.h"
#include "IDataProcessingVisitor.h"
#include <iostream>

void UserActivityModule::processActivity() {
    std::cout << "[UserActivityModule] ��������� �������� ������������\n";
}

void UserActivityModule::accept(IDataProcessingVisitor& visitor) {
    visitor.visit(*this);
}