// Интерфейс для клонирования
#pragma once
class ICloneableModule {
public:
    virtual ICloneableModule* clone() const = 0;
    virtual void execute() const = 0;
};

