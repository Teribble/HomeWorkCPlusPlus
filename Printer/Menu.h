#pragma once
#include "Helper_fail/Helper.h"
#include "Printer.h"

#define KEY_ONE 49
#define KEY_TWO 50
#define KEY_THREE 51
#define Three_second 300 //Три секунды

class Menu
{
public:
	// Показать статус
	static void showStatus( std::string status );
	// Показать панель действий
	static void showActionBar();
	// Показать заголовок базовой таблицы
	static void showTableHeaderBaseQueue();
	// Показать заголовок таблицы статистики
	static void showTableHeaderStatQueue();
	// Выполняем функцию по нажатой кнопки
	static void pressKeyActionBar( Printer<std::string> &printer , int key );
};

