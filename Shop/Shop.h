#pragma once
#pragma region includes
#include "Client.h"
#include "Salesman.h"
#include "Engineer.h"
#include "Helper.h"
#include "Orders.h"
#include <vector>
#pragma endregion includes

class Shop
{
public:
#pragma region CTOR

	// Конструктор по умолчанию
	Shop();
	// Конструктор с параметрами
	Shop( std::string name );
	// Добавить клиента
	void addClient(Client client);
	// Добавить Работника
	void addWorker(Worker worker);
	// Метод инициирования работы
	void initiateASale(int valueOrdering);
	// Показать историю
	void showHistory();
	// Показать клиентов
	void showClients();
	// Показать работников
	void showWorkers();
	// менюшка :)
	void menu();
#pragma endregion CTOR

private:
#pragma region Fields
	std::string nameShop;
	std::vector<Client> client;
	std::vector<Worker> worker;
	std::vector<Orders> history;
#pragma endregion Fields
};

