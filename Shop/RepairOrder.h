#pragma once
#include "Orders.h"

#define BASE_OF_PERIOD "Base/Period.txt"

class RepairOrder : public Orders
{
public:
#pragma region CTOR

	// Конструктор с параметрами
	RepairOrder( double price , std::string nameWorker , std::string nameClient ) :
		Orders( price , nameWorker , nameClient )
	{
		// Сразу же инициализируем период выполнения
		periodOfExecution = Helper::getRandomLine( BASE_OF_PERIOD );
	}

#pragma endregion CTOR

#pragma region Methods

	// Возращает период выполнения
	std::string getPeriodOfExecution() const;

#pragma endregion Methods
};

