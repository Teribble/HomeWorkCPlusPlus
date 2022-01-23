#pragma once
#include "Human.h"

// Производный класс "Клиент" от "Человека"
class Client : public Human
{
public:
#pragma region CTOR

	// Конструктор по умолчанию
	Client() : Human( "no name" ){ }

	// Конструктор с параметром
	Client(std::string name) : Human(name){ }

#pragma endregion CTOR
};

