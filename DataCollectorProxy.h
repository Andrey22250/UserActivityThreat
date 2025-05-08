//Класс-прокси для IDataCollector, который добавляет проверку условий перед вызовом реальных методов сбора данных (доступ к работе с данными). 
//Если условия не удовлетворены, прокси предотвращает выполнение команды.
#pragma once
#include "IDataCollector.h"
#include <iostream>

//   Класс-заместитель для IDataCollector
class DataCollectorProxy : public IDataCollector
{
private:
    IDataCollector* realCollector; // Оригинальный объект
    bool accessGranted;            // Пример дополнительного условия

public:
    // Конструктор, принимающий оригинальный объект и условие доступа
    DataCollectorProxy(IDataCollector* collector, bool access);

    // Переопределение метода для сбора пользовательских действий
    int collectUserActions() override;

    // Переопределение метода для сбора метаданных
    int collectMetadata() override;

    // Переопределение метода для шифрования данных
    int encryptData() override;

    // Переопределение метода для отправки данных на обработку
    int sendToProcessing() override;
};