#pragma once
#include "Helper/Helper.h"

class ConsoleManagement final
{
#pragma region Methods

public:
	// Метод с помощью которого получаем объект класса (это единственный способ)
	static ConsoleManagement* getInstance();
	// Удаляет объект ConsoleManagement из памяти
	static void release();
	// RED, BLACK, GREEN, YELLOW, BLUE, MAGENTA, LIGHTBLUE, WHITE, RESET 
	void setColorText(int color);
	// "Очистка" консоли
	void clearConsole();
	// Устанавливает курсор по указанным координатам
	void setCursorPosition( int x , int y );
	// Возращает координату х, которая была установлена с помощью  метода setCursorPosition()
	int getLastPositionX() const;
	// Возращает координату у, которая была установлена с помощью  метода setCursorPosition()
	int getLastPositionY() const;
	// Возращает строку с текстом, который описывает последний использованный цвет с помощью метода setColorText()
	std::string getLastColorText();
	// Удаляем(запрещаем) оператор "равно"
	ConsoleManagement& operator=( const ConsoleManagement& right ) = delete;

#pragma endregion Methods

#pragma region Fields

private:
	// Указатель на объект данного класса, который является единственным
	static ConsoleManagement* instance;
	// Приватный конструктор по умолчанию
	ConsoleManagement();
	// Деструктор
	~ConsoleManagement();
	// Удаляем(запрещаем) конструктор копирования
	ConsoleManagement( const ConsoleManagement& right ) = delete;
	// Координата х
	int x;
	// Координата у
	int y;
	// Значение цвета текста консоли
	int color;
#pragma endregion Fields
};