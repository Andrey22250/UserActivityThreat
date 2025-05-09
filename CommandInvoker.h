#pragma once
#include "ICommand.h"
#include <vector>

class CommandInvoker {
    std::vector<ICommand*> commandQueue;
public:
    void addCommand(ICommand* command);
    void run();
    void undoAll();
};