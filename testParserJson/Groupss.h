#pragma once
#include "HelperInclude.h"

class Groupss
{
public:

#pragma region Constructors and Destructor

	Groupss();
	Groupss(std::string name);
	~Groupss();

#pragma endregion Constructors and Destructor

#pragma region Set and Add
	void setNameGroup(std::string name);
	void addStudents( std::string name );
	void addSubjects( std::string nameSubjects );
	void addMarks( int* mark, int size );
#pragma endregion Set and Add

#pragma region MethodsClass
	// Заполнение объекта из строки, которая запарсена из json
	void initJson( std::string stringJson );

	// Печать группы студентов
	void printGroup();
#pragma endregion MethodsClass

private:
#pragma region Field
	// Имя группы
	std::string name;

	// Массив студентов
	Students* students;

	// Массив предметов
	Subjects* subjects;

	// Массив, массивов оценок
	Marks* marks;
#pragma endregion Field

#pragma region Helper Fields
	// Счетчики полей
	int counterStudents;
	int counterSubjects;
	int counterMarks;
#pragma endregion Helper Fields
};

