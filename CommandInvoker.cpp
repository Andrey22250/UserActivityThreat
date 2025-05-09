#include "CommandInvoker.h"

void CommandInvoker::addCommand(ICommand* command) {
    commandQueue.push_back(command);
}

void CommandInvoker::run() {
    for (auto command : commandQueue) {
        command->execute();
    }
}

void CommandInvoker::undoAll() {
    for (auto it = commandQueue.rbegin(); it != commandQueue.rend(); ++it)
        (*it)->undo();
}