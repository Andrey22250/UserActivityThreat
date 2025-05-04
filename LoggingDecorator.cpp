#include "LoggingDecorator.h"
#include <iostream>

int LoggingDecorator::collectUserActions() {
    std::cout << "[LoggingDecorator] Логирование перед сбором данных\n";
    wrapped->collectUserActions();
    std::cout << "[LoggingDecorator] Логирование после сбора данных\n";
	return 0;
}