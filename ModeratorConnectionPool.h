//Менеджер пула объектов ModeratorConnection. Содержит очередь доступных подключений.
#pragma once
#include "ModeratorConnection.h"
#include <queue>

class ModeratorConnectionPool {
private:
    std::queue<IModeratorConnection*> pool;
    int maxSize;

public:
    ModeratorConnectionPool(int size);
    ~ModeratorConnectionPool();

    IModeratorConnection* acquire();
    void release(IModeratorConnection* conn);
};