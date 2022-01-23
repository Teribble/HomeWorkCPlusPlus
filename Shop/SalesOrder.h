#pragma once
#include "Orders.h"

// Производный класс "Чек продавца" от "Чека"
class SalesOrder : public Orders
{
public:
#pragma region CTOR

	// Конструктор
	SalesOrder( double price , std::string nameWorker , std::string nameClient ) :
		Orders( price , nameWorker , nameClient )
	{

	}

#pragma endregion CTOR
};

