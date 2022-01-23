#include "Human.h"

Human::Human()
{
	name = "no name";
}

Human::Human( std::string name )
{
	this->name = name;
}

std::string Human::getName() const
{
	return name;
}

void Human::setName()
{
	this->name = name;
}
