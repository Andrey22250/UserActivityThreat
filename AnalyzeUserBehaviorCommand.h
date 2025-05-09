#pragma once
#include "ICommand.h"
#include <string>
#include <iostream>

class AnalyzeUserBehaviorCommand : public ICommand {
    std::string userData;
public:
    AnalyzeUserBehaviorCommand(const std::string& data);
    void execute() override;
    void undo() override;
};