#include <iostream>
#include <windows.h>
#include "DataPreprocessingComponent.h"
#include "TextPreprocessor.h"
#include "ImagePreprocessor.h"
#include "AudioPreprocessor.h"
#include "MetadataFactory.h"
#include "UserActivityMeta.h"
#include "SecuritySystemFacade.h"
#include "ThreatClassificationModule.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // --- Bridge Demo ---
    std::cout << "=== Bridge Demo === \n";
    TextPreprocessor text;
    ImagePreprocessor image;
    AudioPreprocessor audio;

    DataPreprocessingComponent textModule(&text);
    DataPreprocessingComponent imageModule(&image);
    DataPreprocessingComponent audioModule(&audio);

    textModule.process("Текстовые данные!");
    imageModule.process("image.png");
    audioModule.process("song.mp3");
    
	// --- Flyweight Demo ---
	std::cout << "\n=== Flyweight Demo ===\n";
    UserActivityMeta a1(MetadataFactory::getMetadata("Пк|Европа"), "Нажатие клавиши");
    UserActivityMeta a2(MetadataFactory::getMetadata("Пк|Европа"), "Прокрутка страницы");
    UserActivityMeta a3(MetadataFactory::getMetadata("Телефон|Азия"), "Открытие меню");

    a1.printActivity();
    a2.printActivity();
    a3.printActivity();

    MetadataFactory::cleanup(); // освободить кэш

	// --- Facade Demo ---
	std::cout << "\n=== Facade Demo ===\n";
    SecuritySystemFacade facade;
    facade.runFullCheck(); // Всё делается одним вызовом

	// --- Information Expert ---
	std::cout << "\n=== Information Expert ===\n";
    ThreatClassificationModule* threatAssessment = new ThreatClassificationModule;
	threatAssessment->evaluateThreatLevel();
	threatAssessment->applyPredefinedModels();

    return 0;
}