#pragma once
#include "Orders.h"

#define BASE_OF_PERIOD "Base/Period.txt"

class RepairOrder : public Orders
{
public:
#pragma region CTOR

	// ����������� � �����������
	RepairOrder( double price , std::string nameWorker , std::string nameClient ) :
		Orders( price , nameWorker , nameClient )
	{
		// ����� �� �������������� ������ ����������
		periodOfExecution = Helper::getRandomLine( BASE_OF_PERIOD );
	}

#pragma endregion CTOR

#pragma region Methods

	// ��������� ������ ����������
	std::string getPeriodOfExecution() const;

#pragma endregion Methods
};

