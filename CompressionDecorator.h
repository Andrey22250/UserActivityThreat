// ���������� ���������, ����������� ����������� ������ ������ ����� �� ���������. ����������� ������ IDataCollector � ��������� ����� sendToProcessing() ������� ����������.
#pragma once
#include "IDataCollectorDecorator.h"

class CompressionDecorator : public IDataCollectorDecorator {
public:
    CompressionDecorator(IDataCollector* collector);
    int sendToProcessing() override;
};