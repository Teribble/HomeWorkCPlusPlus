#include "Menu.h"

void Menu::showStatus( std::string status )
{
	hl::setCursorPosition( ZERO, NINE );
	std::cout << "Status:" << TEXT_GREEN << status<<"         " << TEXT_RESET << std::endl;
}

void Menu::showActionBar()
{
	hl::setCursorPosition( ZERO , TEN );
	std::cout << "1: Add admin" << std::endl;
	std::cout << "2: Add user" << std::endl;
	std::cout << "3: Delete max pri" << std::endl;
}

void Menu::showTableHeaderBaseQueue()
{
	hl::setCursorPosition( ZERO , ZERO );
	std::cout << "\033[47;31m" << std::left << std::setw( TEN + FIVE ) << "User"
		<< std::left << std::setw( TEN + FIVE ) << "Priority"
		<< std::left << std::setw( TEN + TEN + FOUR ) << "Data" << TEXT_RESET << std::endl;
}

void Menu::showTableHeaderStatQueue()
{
	hl::setCursorPosition( ZERO , TEN + FOUR );
	std::cout << "\033[47;31m" << std::left << std::setw( TEN + FIVE ) << "User"
		<< std::left << std::setw( TEN + FIVE ) << "Priority"
		<< std::left << std::setw( TEN + TEN + FOUR ) << "Complate time" << TEXT_RESET << std::endl;
}

void Menu::pressKeyActionBar( Printer<std::string>& printer , int key )
{
	switch(key)
	{
		case KEY_ONE:
			if(!printer.isFull())
			{
				Menu::showStatus( "Add admin" );
				printer.add( "Admin" , FIVE );
				Sleep( Three_second );
				system( "cls" );
				Menu::showTableHeaderBaseQueue();
				printer.showBaseQueue();
				Menu::showStatus( "ONLINE" );
				Menu::showActionBar();
				Menu::showTableHeaderStatQueue();
				if(!printer.isEmpty())
				{
					printer.showStatisticsQueue();
				}
			}
			else
			{
				Menu::showStatus( "Queue is full" );
			}
			break;
		case KEY_TWO:
			if(!printer.isFull())
			{
				Menu::showStatus( "Add user" );
				printer.add( "User" , ONE );
				Sleep( Three_second );
				system( "cls" );
				Menu::showTableHeaderBaseQueue();
				printer.showBaseQueue();
				Menu::showStatus( "ONLINE" );
				Menu::showActionBar();
				Menu::showTableHeaderStatQueue();
				if(!printer.isEmpty())
				{
					printer.showStatisticsQueue();
				}
			}
			else
			{
				Menu::showStatus( "Queue is full" );
			}
			break;
		case KEY_THREE:
			if(!printer.isEmpty())
			{
				Menu::showStatus( "Prints" );
				hl::setCursorPosition( ZERO , SIX );
				std::cout << "Print " << printer.pop() << std::endl;
				std::cout << "Loading...";
				hl::loadingBar();
				Sleep( Three_second );
				system( "cls" );
				Menu::showTableHeaderBaseQueue();
				printer.showBaseQueue();
				Menu::showStatus( "ONLINE" );
				Menu::showActionBar();
				Menu::showTableHeaderStatQueue();
				printer.showStatisticsQueue();
				break;
			}
			else
			{
				Menu::showStatus( "Queue is empty" );
			}
	}
}
