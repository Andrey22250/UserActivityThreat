#include "LoggingDecorator.h"
#include <iostream>

int LoggingDecorator::collectUserActions() {
    std::cout << "[LoggingDecorator] ����������� ����� ������ ������\n";
    wrapped->collectUserActions();
    std::cout << "[LoggingDecorator] ����������� ����� ����� ������\n";
	return 0;
}