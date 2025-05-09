#pragma once
#include "ICommand.h"
#include <string>
#include <iostream>

class LogActivityCommand : public ICommand {
    std::string message;
public:
    LogActivityCommand(const std::string& msg);
    void execute() override;
    void undo() override;
};