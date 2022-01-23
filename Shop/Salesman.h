#pragma once
#include "Worker.h"

// ����������� ����� "��������" �� "��������"
class Salesman : public Worker
{
public:
#pragma region CTOR

	// ����������� �� ���������
	Salesman() : Worker("no name")
	{ 
		// ����� �������������� ����� ������ ��������
		schedule = "� 9:00 �� 18:00";
	}

	// ����������� � ����������
	Salesman(std::string name):
		Worker(name)
	{
		// ����� �������������� ����� ������ ��������
		schedule = "� 9:00 �� 18:00";
	}

#pragma endregion CTOR

#pragma region Methods

	// �������� �����
	void ordering();

#pragma endregion Methods

};

