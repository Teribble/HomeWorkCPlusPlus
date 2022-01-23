#pragma once
#include "Worker.h"

// Производный класс "Инженер" от "Рабочего"
class Engineer : public Worker
{
public:
#pragma region CTOR

	Engineer() : Worker( "no name" )
	{
		// Сразу инициализируем время работы инженера
		schedule = "с 9:30 до 18:30";
		// Сразу же инициализируем срок  выполнения
		periodOfExecution = "в течении 7 рабочих дней";
	}
	Engineer( std::string name ) :
		Worker( name )
	{
		// Сразу инициализируем время работы инженера
		schedule = "с 9:30 до 18:30";
		// Сразу же инициализируем срок  выполнения
		periodOfExecution = "в течении 7 рабочих дней";
	}
	
#pragma endregion CTOR

#pragma region Methods

	// Возращает строку "срок выполнения заказа"
	std::string getPeriodOfExecution() const;

	// Оформить заказ
	void ordering();

#pragma endregion Methods

#pragma region Fields

private:

	// Срок выполнения
	std::string periodOfExecution;

#pragma endregion Fields
};

