#include "DataPreprocessingModule.h"

void DataPreprocessingModule::cleanData() 
{
    std::cout << "������� ������..." << std::endl;
    // ������ ������� ������
    cleaned_data = "��������� ������";
}

void DataPreprocessingModule::normalizeData() {
    std::cout << "������������ ������..." << std::endl;
    // ������ ������������ ������
    normalized_data = "��������������� ������";
}

void DataPreprocessingModule::structureData() {
    std::cout << "���������������� ������..." << std::endl;
    // ������ ���������������� ������
    structured_data = "����������������� ������";
}

void DataPreprocessingModule::sendToAnalysis() {
    std::cout << "�������� ������ �� ������..." << std::endl;
    // ������ �������� ������ �� ������
    std::cout << "������ ��� �������: " << structured_data << std::endl;
}