#include "Students.h"

void Students::setName( std::string studentName )
{
	Students::studentName = studentName;
}

std::string Students::getNames()
{
	return Students::studentName;
}
