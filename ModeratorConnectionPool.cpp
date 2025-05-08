#include "ModeratorConnectionPool.h"

ModeratorConnectionPool::ModeratorConnectionPool(int size) : maxSize(size) {
    for (int i = 0; i < maxSize; ++i) {
        pool.push(new ModeratorConnection());
    }
}

ModeratorConnectionPool::~ModeratorConnectionPool() {
    while (!pool.empty()) {
        delete pool.front();
        pool.pop();
    }
}

IModeratorConnection* ModeratorConnectionPool::acquire() {
    if (pool.empty()) return new ModeratorConnection(); // резервный случай
    IModeratorConnection* conn = pool.front();
    pool.pop();
    return conn;
}

void ModeratorConnectionPool::release(IModeratorConnection* conn) {
    if (pool.size() < maxSize) {
        pool.push(conn);
    }
    else {
        delete conn;
    }
}