#pragma once
class Marks
{
public:

#pragma region Constructors and Destructor
	Marks();
	~Marks();
#pragma endregion Constructors and Destructor

#pragma region Setters and Getters
	void setMarks( int marks);
	int getMarks( int numberMark );
	int getCounterMarks();
#pragma endregion Setters and Getters

	// Метод созданный для проверки меня же :D
	void printMarks();

private:

	int* marks;
	int markCounter;
};

