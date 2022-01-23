#pragma once
#include "Helper.h"

// Класс "Человека"
class Human
{
public:

#pragma region CTOR

	// Конструктор по умолчанию
	Human();

	// Конструктор с параметром
	Human( std::string name );

#pragma endregion CTOR

#pragma region Methods

	// Возращает имя человека
	std::string getName() const;
protected:

	// Инициализируем имя человека
	void setName();

#pragma endregion Methods

#pragma region Fields

private:
	// Имя
	std::string name;

#pragma endregion Fields

};

