#pragma once
#include "Orders.h"

// ����������� ����� "��� ��������" �� "����"
class SalesOrder : public Orders
{
public:
#pragma region CTOR

	// �����������
	SalesOrder( double price , std::string nameWorker , std::string nameClient ) :
		Orders( price , nameWorker , nameClient )
	{

	}

#pragma endregion CTOR
};

