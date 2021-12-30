#include "Subjects.h"

void Subjects::setSubjectName( std::string subjectName )
{
	Subjects::subjectName = subjectName;
}

std::string Subjects::getSubjectName()
{
	return Subjects::subjectName;
}
