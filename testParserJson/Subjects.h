#pragma once
#include "HelperInclude.h"


class Subjects
{
public:
#pragma region Setters and Getters
	void setSubjectName(std::string subjectName );
	std::string getSubjectName();
#pragma endregion Setters and Getters

private:
#pragma region Field
	std::string subjectName;
#pragma endregion Field
};

