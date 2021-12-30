#include "Marks.h"
#include <iostream>
Marks::Marks()
{
	Marks::marks = nullptr;
	Marks::markCounter = 0;
}

Marks::~Marks()
{
	if(Marks::marks == nullptr)
	{
		delete[]Marks::marks;
		Marks::marks = nullptr;
	}
}

void Marks::setMarks( int marks)
{
	int newCounterMark = Marks::markCounter + 1;
	int* newMarks = new int[ newCounterMark ];

	if(newCounterMark > 0)
	{
		for(int i = 0; i < Marks::markCounter; i++)
		{
			newMarks[ i ] = Marks::marks[ i ];
		}

		newMarks[ newCounterMark - 1 ] = marks;
		delete[] Marks::marks;
		Marks::marks = newMarks;
		Marks::markCounter = newCounterMark;
	}
}

int Marks::getMarks(int numberMark )
{
	return Marks::marks[numberMark];
}

int Marks::getCounterMarks()
{
	return Marks::markCounter;
}

void Marks::printMarks()
{
	for(int i = 0; i < Marks::markCounter; i++)
	{
		std::cout << Marks::marks[ i ] << " ";
	}
}
