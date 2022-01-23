#pragma once
#include "Worker.h"

// Производный класс "Продавец" от "Рабочего"
class Salesman : public Worker
{
public:
#pragma region CTOR

	// Конструктор по умолчанию
	Salesman() : Worker("no name")
	{ 
		// Сразу инициализируем время работы продавца
		schedule = "с 9:00 до 18:00";
	}

	// Конструктор с параметром
	Salesman(std::string name):
		Worker(name)
	{
		// Сразу инициализируем время работы продавца
		schedule = "с 9:00 до 18:00";
	}

#pragma endregion CTOR

#pragma region Methods

	// Оформить заказ
	void ordering();

#pragma endregion Methods

};

