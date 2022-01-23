#pragma once
#include "Human.h"
#include "SalesOrder.h"
#include "RepairOrder.h"
#include "Client.h"

#define BASE_OF_WORKERS "Base/Workers.txt"
#define BASE_OF_CLIENTS "Base/Clients.txt"

class Worker : public Human
{
public:
#pragma region CTOR and DCTOR

	// ����������� �� ���������
	Worker() : Human( "no name" )
	{
		schedule = "��� ����������";
		order = nullptr;
	}

	// ����������� � �����������
	Worker(std::string name) : Human(name)
	{
		schedule = "��� ����������";
		order = nullptr;
	}
	// ����������
	~Worker();

	// ��������� ���
	Orders getOrder() const;

#pragma endregion CTOR and DCTOR

#pragma region Methods

	// ��������� ����������
	std::string getSchedule() const;

protected:

	// �������� �����
	void ordering();
	// ���
	Orders* order;

#pragma endregion Methods

#pragma region Fields

	// ����������
	std::string schedule;

#pragma endregion Fields
};

