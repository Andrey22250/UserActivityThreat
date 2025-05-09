#include <iostream>
#include <windows.h>
#include "State.h"
#include "Memento.h"
#include "UserSecurityProfile.h"
#include "ThreatMonitor.h"
#include "ModeratorNotifier.h"
#include "LogSystem.h"
#include <memory>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	// --- State Demo ---
	std::cout << "=== State Demo ===\n";
    std::shared_ptr<IAnalysisState> initialState = std::make_shared<InitialCollectionState>();
    AnalysisContext context(initialState);

    context.process(); // InitialCollectionState -> BehaviorAnalysisState
    context.process(); // BehaviorAnalysisState -> ThreatAssessmentState
    context.process(); // ThreatAssessmentState -> завершение

    // --- Memento Demo ---
    std::cout << "\n=== Memento Demo ===\n";
    UserSecurityProfile profile("Низкий", "Нормальный");
    profile.print();

    Memento* snapshot = profile.save();  // Сохраняем состояние

    profile.setThreatLevel("Высокий");
    profile.setBehaviorTag("Подозрительный");
    profile.print();

    profile.restore(snapshot);  // Восстанавливаем
    profile.print();

    delete snapshot;

	// --- Observer Demo ---
	std::cout << "\n=== Observer Demo ===\n";
	ThreatMonitor monitor;
	LogSystem logger;
	ModeratorNotifier moderator;

	monitor.addObserver(&logger);
	monitor.addObserver(&moderator);

	monitor.setThreatLevel("Средний");
	monitor.setThreatLevel("Высокий");

    return 0;
}