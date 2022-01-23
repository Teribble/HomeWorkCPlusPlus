#include "Orders.h"

Orders::Orders()
{
	price = 0.0;
	nameClient = "no name";
	nameWorker = "no name";
	periodOfExecution = "";
}

Orders::Orders( double price , std::string nameWorker , std::string nameClient )
{
	this->price = price;
	this->nameClient = nameClient;
	this->nameWorker = nameWorker;
	this->periodOfExecution = "не указан";
}

std::string Orders::getNameWorker() const
{
	return nameWorker;
}

std::string Orders::getNameClient() const
{
	return nameClient;
}

double Orders::getPrice() const
{
	return price;
}

std::string Orders::getPeriodOfExecution() const
{
	return periodOfExecution;
}
