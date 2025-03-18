#include "ThreatClassificationModule.h"

void ThreatClassificationModule::evaluateThreatLevel() {
	srand(time(0)); // Инициализация генератора случайных чисел
    std::cout << "Определение уровня угрозы..." << std::endl;
	threatLevel = rand() % 10 + 1; // Генерация случайного уровня угрозы от 1 до 10
}

void ThreatClassificationModule::applyPredefinedModels() {
    std::cout << "Применение нужной модели поведения..." << std::endl;
	responseStrategy = "Стратегия реагирования на уровень " + std::to_string(threatLevel); // Пример стратегии реагирования
}

void ThreatClassificationModule::generateThreatReport() {
    std::cout << "Генерация отчёта о реагировании..." << std::endl;
}

void ThreatClassificationModule::sendToResponseSystem() {
    std::cout << "Отправка данных на систему реагирования..." << std::endl;
}