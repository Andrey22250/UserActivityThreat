// Ёто общий интерфейс дл€ всех анализаторов угроз(Factory Method)
#pragma once
class IThreatAnalyzer
{
public:
	virtual void analyze() = 0;
};

