#include "Groupss.h"

Groupss::Groupss()
{
	Groupss::name = "n/o";
	Groupss::students = nullptr;
	Groupss::subjects = nullptr;
	Groupss::counterStudents = 0;
	Groupss::counterSubjects = 0;
	Groupss::counterMarks = 0;
}

Groupss::Groupss( std::string name )
{
	Groupss::name = name;
}

Groupss::~Groupss()
{
	if(Groupss::students != nullptr)
	{
		delete[] Groupss::students;
	}
	Groupss::students = nullptr;
	if(Groupss::subjects != nullptr)
	{
		delete[] Groupss::subjects;
	}
	Groupss::subjects = nullptr;
	if(Groupss::marks != nullptr)
	{
		delete[] Groupss::marks;
	}
	Groupss::marks = nullptr;
}

void Groupss::setNameGroup( std::string name )
{
	Groupss::name = name;
}

void Groupss::addStudents( std::string name )
{
	int newCounterStudents = Groupss::counterStudents + 1;
	Students* newStudent = new Students[ newCounterStudents ];

	int length = Groupss::counterStudents;

	if(Groupss::counterStudents > 0)
	{
		for(int i = 0; i < length; i++)
		{
			newStudent[ i ] = Groupss::students[ i ];
		}
	}

	newStudent[ newCounterStudents - 1 ].setName( name );
	delete[]Groupss::students;
	Groupss::students = newStudent;
	Groupss::counterStudents = newCounterStudents;
}

void Groupss::addSubjects( std::string nameSubjects )
{
	int newCounterSubjects = Groupss::counterSubjects + 1;
	Subjects* newSubjects = new Subjects[ newCounterSubjects ];

	if(Groupss::counterSubjects > 0)
	{
		for(int i = 0; i < Groupss::counterSubjects; i++)
		{
			newSubjects[ i ] = Groupss::subjects[ i ];
		}
	}

	newSubjects[ newCounterSubjects - 1 ].setSubjectName( nameSubjects );
	delete[]Groupss::subjects;
	Groupss::subjects = newSubjects;
	Groupss::counterSubjects = newCounterSubjects;
}

void Groupss::addMarks(int *mark, int size)
{
	int newCounterMark = Groupss::counterMarks + 1;
	Marks *newMarks = new Marks[ newCounterMark ];

	if(newCounterMark > 0)
	{
		for(int i = 0; i < Groupss::counterMarks; i++)
		{
			newMarks[ i ] = Groupss::marks[ i ];
		}
		for(int i = 0; i < size; i++)
		{
			newMarks[ newCounterMark - 1 ].setMarks( mark[ i ] );
		}
		delete[] Groupss::marks;
		Groupss::marks = newMarks;
		Groupss::counterMarks = newCounterMark;
	}
}

void Groupss::initJson( std::string stringJson )
{
	std::cout << stringJson << std::endl;

	char* token = strtok( &stringJson[ 0 ] , "," );
	while(token != NULL)
	{
		//std::cout <<"\n" << token;
		if(JSONParsing::myFindBool( token , "marks" ))
		{
			token = strtok( NULL , "[,]" );
			int counter = 0;
			int* buffer = new int[ Groupss::counterStudents ];
			while(token != NULL)
			{
				if(token[ 0 ] == '{' || token[ 0 ] == '}' || token[ 0 ] == '\"')
				{
					break;
				}
				else
				{
					//Ñ×ÅÒ×ÈÊ ÄÂÀ ÂÌÅÑÒÎ 3
					buffer[counter++] = JSONParsing::getValueInt( token );
					token = strtok( NULL , "[,]" );
					if(counter >= Groupss::counterStudents)
					{
						Groupss::addMarks( buffer , Groupss::counterStudents );
						counter = 0;
					}
				}
			}
		}
		else if(JSONParsing::myFindBool( token , "students" ))
		{
			while(token != NULL)
			{
				if(JSONParsing::myFindBool( token , "subjects" ))
				{
					break;
				}
				else if(JSONParsing::myFindBool( token , "marks" ))
				{
					break;
				}
				else if(token[ 0 ] == '{' && !JSONParsing::myFindBool( token , "studentName" ) || token[ 0 ] == '}' || token[ 0 ] == '\"')
				{
					token = strtok( NULL , "[,]" );
					continue;
				}
				else if(token[ 0 ] == '{' && JSONParsing::myFindBool( token , "studentName" ))
				{
					Groupss::addStudents(JSONParsing::getValue( token , "studentName" ));
					token = strtok( NULL , "[,]" );
				}
			}
		}
		else if(JSONParsing::myFindBool( token , "subjects" ))
		{
			while(token != NULL)
			{
				if(JSONParsing::myFindBool( token , "marks" ) || JSONParsing::myFindBool( token , "students" ))
				{
					break;
				}
				else if(token[ 0 ] == '{' && !JSONParsing::myFindBool( token , "subjectsName" ) || token[ 0 ] == '}' || token[ 0 ] == '\"')
				{
					token = strtok( NULL , "[,]" );
					continue;
				}
				else if(token[ 0 ] == '{' && JSONParsing::myFindBool( token , "subjectsName" ))
				{
					Groupss::addSubjects( JSONParsing::getValue( token , "subjectsName" ) );
					token = strtok( NULL , "[,]" );
				}
			}
		}
		else
		{
			Groupss::setNameGroup(JSONParsing::getValue( token , "name" ));
		}
		if(token == NULL)
		{
			break;
		}
		if(!JSONParsing::myFindBool( token , "marks" ) && !JSONParsing::myFindBool( token , "students") && !JSONParsing::myFindBool( token , "subjects" ))
		{
			token = strtok( NULL , "[,]" );
		}
	}
}

void Groupss::printGroup()
{
	std::cout << "\t\tGroup name: " << Groupss::name << std::endl;
	for(int i = 0; i < Groupss::counterStudents; i++)
	{
		std::cout << "Student name:" << Groupss::students[ i ].getNames() << std::endl << "Subject name: ";

		for(int j = 0; j < Groupss::counterSubjects; j++)
		{
			std::cout << Groupss::subjects[ j ].getSubjectName() << "\t";
		}
		std::cout << std::endl << "               ";
		for(int j = 0; j < Groupss::counterMarks; j++)
		{
			std::cout << Groupss::marks[i].getMarks(j) << "\t";
		}
		std::cout << std::endl;
	}
}
