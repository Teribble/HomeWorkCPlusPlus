#pragma once
#include "Client.h"
#include "Salesman.h"
#include "Engineer.h"
#include "Helper.h"
#include "Orders.h"
#include <vector>

class Shop
{
public:
#pragma region CTOR

	// Конструктор по умолчанию
	Shop();
	// Конструктор с параметрами
	Shop( std::string name );

	void addClient(Client client);
	void addWorker(Worker worker);
	void initiateASale(int valueOrdering);

	void showHistory();
	void showClients();
	void showWorkers();
	void menu();
#pragma endregion CTOR

private:
	std::string nameShop;
	std::vector<Client> client;
	std::vector<Worker> worker;
	std::vector<Orders> history;
};

