#pragma once
#include "Human.h"

// ����������� ����� "������" �� "��������"
class Client : public Human
{
public:
#pragma region CTOR

	// ����������� �� ���������
	Client() : Human( "no name" ){ }

	// ����������� � ����������
	Client(std::string name) : Human(name){ }

#pragma endregion CTOR
};

