#pragma once
#include "Helper.h"

// Класс "Чек"
class Orders
{
public:
#pragma region CTOR

	// Конструктор по умолчанию
	Orders();
	// Конструктор
	Orders( double price , std::string nameWorker , std::string nameClient );

#pragma endregion CTOR

#pragma region Methods

	// Возращает имя работника
	std::string getNameWorker() const;
	// Возращает имя клиента
	std::string getNameClient() const;
	// Возращает цену
	double getPrice() const;

	std::string getPeriodOfExecution() const;

#pragma endregion Methods


#pragma region Fields
protected:

	std::string periodOfExecution;
	
private:
	// Имя работника
	std::string nameWorker;
	// Имя клиента
	std::string nameClient;
	// Цена
	double price;

#pragma endregion Fields
};

