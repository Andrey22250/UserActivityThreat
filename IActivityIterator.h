#pragma once
#include <vector>
#include "UserActivity.h"

// ��������� ���������
class IActivityIterator {
public:
    virtual bool hasNext() const = 0;
    virtual UserActivity next() = 0;
};