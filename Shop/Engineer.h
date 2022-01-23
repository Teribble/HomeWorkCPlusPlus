#pragma once
#include "Worker.h"

// ����������� ����� "�������" �� "��������"
class Engineer : public Worker
{
public:
#pragma region CTOR

	Engineer() : Worker( "no name" )
	{
		// ����� �������������� ����� ������ ��������
		schedule = "� 9:30 �� 18:30";
		// ����� �� �������������� ����  ����������
		periodOfExecution = "� ������� 7 ������� ����";
	}
	Engineer( std::string name ) :
		Worker( name )
	{
		// ����� �������������� ����� ������ ��������
		schedule = "� 9:30 �� 18:30";
		// ����� �� �������������� ����  ����������
		periodOfExecution = "� ������� 7 ������� ����";
	}
	
#pragma endregion CTOR

#pragma region Methods

	// ��������� ������ "���� ���������� ������"
	std::string getPeriodOfExecution() const;

	// �������� �����
	void ordering();

#pragma endregion Methods

#pragma region Fields

private:

	// ���� ����������
	std::string periodOfExecution;

#pragma endregion Fields
};

