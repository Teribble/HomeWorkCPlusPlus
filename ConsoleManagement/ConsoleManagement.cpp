#include "ConsoleManagement.h"

ConsoleManagement* ConsoleManagement::instance = nullptr;

ConsoleManagement* ConsoleManagement::getInstance()
{
	if(nullptr == instance)
		instance = new ConsoleManagement();

	return instance;
}

void ConsoleManagement::release()
{
	if(nullptr != instance)
	{
		delete instance;
		instance = nullptr;
	}
}
// RED = 31 ,BLACK = 30 ,GREEN = 32 ,YELLOW = 33 ,BLUE = 34,MAGENTA = 35 ,LIGHTBLUE = 36 ,WHITE = 37 ,RESET = 0
void ConsoleManagement::setColorText( int color )
{
	this->color = color;
	std::cout << "\x1b[" + std::to_string( color ) + "m";
}

void ConsoleManagement::clearConsole()
{
	std::cout << "\x1B[2J\x1B[H";
}

void ConsoleManagement::setCursorPosition( int x , int y )
{
	this->x = x;
	this->y = y;
	std::cout << "\x1b[" + std::to_string( y ) + ";" + std::to_string( x ) + "H";
}

int ConsoleManagement::getLastPositionX() const
{
	return this->x;
}

int ConsoleManagement::getLastPositionY() const
{
	return this->y;
}

std::string ConsoleManagement::getLastColorText()
{
	switch(this->color)
	{
		case 0:
			return "White";
			break;
		case 30:
			return "Black";
			break;
		case 31:
			return "Red";
			break;
		case 32:
			return "Green";
			break;
		case 33:
			return "Yellow";
			break;
		case 34:
			return "BLUE";
			break;
		case 35:
			return "Magenta";
			break;
		case 36:
			return "LightBlue";
			break;
		case 37:
			return "White";
			break;
	}
}

ConsoleManagement::~ConsoleManagement()
{
	
}

ConsoleManagement::ConsoleManagement()
{
	x = 0;
	y = 0;
	color = 37;
}