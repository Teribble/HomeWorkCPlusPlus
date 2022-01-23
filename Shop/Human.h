#pragma once
#include "Helper.h"

// ����� "��������"
class Human
{
public:

#pragma region CTOR

	// ����������� �� ���������
	Human();

	// ����������� � ����������
	Human( std::string name );

#pragma endregion CTOR

#pragma region Methods

	// ��������� ��� ��������
	std::string getName() const;
protected:

	// �������������� ��� ��������
	void setName();

#pragma endregion Methods

#pragma region Fields

private:
	// ���
	std::string name;

#pragma endregion Fields

};

