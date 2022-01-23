#pragma once
#include "Helper.h"

// ����� "���"
class Orders
{
public:
#pragma region CTOR

	// ����������� �� ���������
	Orders();
	// �����������
	Orders( double price , std::string nameWorker , std::string nameClient );

#pragma endregion CTOR

#pragma region Methods

	// ��������� ��� ���������
	std::string getNameWorker() const;
	// ��������� ��� �������
	std::string getNameClient() const;
	// ��������� ����
	double getPrice() const;

	std::string getPeriodOfExecution() const;

#pragma endregion Methods


#pragma region Fields
protected:

	std::string periodOfExecution;
	
private:
	// ��� ���������
	std::string nameWorker;
	// ��� �������
	std::string nameClient;
	// ����
	double price;

#pragma endregion Fields
};

