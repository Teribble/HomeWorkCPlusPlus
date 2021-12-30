#pragma once
#include "HelperInclude.h"

class Students
{
public:
#pragma region Setters and Getters
	void setName( std::string studentName );
	std::string getNames();
#pragma endregion Setters and Getters
private:
#pragma region Field
	std::string studentName;
#pragma endregion Field
};

