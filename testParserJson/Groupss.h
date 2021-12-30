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
	// ���������� ������� �� ������, ������� ��������� �� json
	void initJson( std::string stringJson );

	// ������ ������ ���������
	void printGroup();
#pragma endregion MethodsClass

private:
#pragma region Field
	// ��� ������
	std::string name;

	// ������ ���������
	Students* students;

	// ������ ���������
	Subjects* subjects;

	// ������, �������� ������
	Marks* marks;
#pragma endregion Field

#pragma region Helper Fields
	// �������� �����
	int counterStudents;
	int counterSubjects;
	int counterMarks;
#pragma endregion Helper Fields
};

