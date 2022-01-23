#include "Menu.h"

void Menu::start( Shop& p )
{
	while(_kbhit)
	{
		p.menu();
		switch(_getch())
		{
			case KEY_ONE:
				p.initiateASale( 10 );
				break;
			case KEY_TWO:
				Helper::setWindowSize( 1060 , 800 );
				p.showHistory();
				break;
			case KEY_THREE:
				Helper::setWindowSize( 710 , 800 );
				p.showWorkers();
				break;
			case KEY_FOUR:
				Helper::setWindowSize( 390 , 800 );
				p.showClients();
				break;
			case KEY_FIVE:
				exit( 0 );
		}
	}
}
