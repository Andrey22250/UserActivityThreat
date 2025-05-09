#include "IHandler.h"

void IHandler::setNext(std::shared_ptr<IHandler> nextHandler) {
    next = nextHandler;
}