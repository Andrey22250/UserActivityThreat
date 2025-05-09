#pragma once
#include <string>
#include <memory>

class IHandler {
public:
    void setNext(std::shared_ptr<IHandler> nextHandler);
    virtual void handle(const std::string& data) = 0;

protected:
    std::shared_ptr<IHandler> next;
};