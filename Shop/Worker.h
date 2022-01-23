#pragma once
#include "Human.h"
#include "SalesOrder.h"
#include "RepairOrder.h"
#include "Client.h"

#define BASE_OF_WORKERS "Base/Workers.txt"
#define BASE_OF_CLIENTS "Base/Clients.txt"

class Worker : public Human
{
public:
#pragma region CTOR and DCTOR

	// Конструктор по умолчанию
	Worker() : Human( "no name" )
	{
		schedule = "нет расписания";
		order = nullptr;
	}

	// Конструктор с параментром
	Worker(std::string name) : Human(name)
	{
		schedule = "нет расписания";
		order = nullptr;
	}
	// Деструктор
	~Worker();

	// Возращает чек
	Orders getOrder() const;

#pragma endregion CTOR and DCTOR

#pragma region Methods

	// Возращает расписание
	std::string getSchedule() const;

protected:

	// Оформить заказ
	void ordering();
	// Чек
	Orders* order;

#pragma endregion Methods

#pragma region Fields

	// Расписание
	std::string schedule;

#pragma endregion Fields
};

