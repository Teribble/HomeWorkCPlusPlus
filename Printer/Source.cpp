// ДОБАВИТЬ КОНСТРУКТОР КОПИРОВАНИЯ И ПЕРЕГРУЗКУ ОПЕРАТОРА РАВНО!
#include "Printer.h"
#include <conio.h>
#include "Menu.h"

#define CONSOLE_WIDTH 465 // Ширина
#define CONSOLE_HEIGHT 800 // Высота



int main()
{
	hl::setWindowSize( CONSOLE_WIDTH , CONSOLE_HEIGHT );

	hl::deleteCursor();

	Printer<std::string> printer(Number::FIVE);

	Menu::showStatus( "ONLINE" );

	Menu::showActionBar();

	Menu::showTableHeaderStatQueue();

	Menu::showTableHeaderBaseQueue();

	while (_kbhit)
	{
		Menu::pressKeyActionBar( printer , _getch() );
	}

	return 0;
}
