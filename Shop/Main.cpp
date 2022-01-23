//Создать иерархию классов для приложения "Магазин"
//В магазине есть работники и клиенты.
//Все они имеют фио.
//У работников есть график работы.
//Работники делятся на продавцов и ремонтников.
//И продавцы и ремонтники могут оформлять заказы.
//У заказа есть стоимость , в нем указан работник , оформивший заказ , и клиент.
//Но у заказов на ремонт есть еще срок выполнения.
//Магазин хранит историю заказов , список работников и клиентов.

//https://github.com/Teribble/HomeWorkCPlusPlus/tree/master/Shop

#pragma region include
#include "Client.h"
#include "Worker.h"
#include "Salesman.h"
#include "Engineer.h"
#include "SalesOrder.h"
#include "RepairOrder.h"
#include "Shop.h"
#include "Menu.h"
#pragma endregion include

#define BASE_OF_WORKERS "Base/Workers.txt"
#define BASE_OF_CLIENTS "Base/Clients.txt"


int main()
{
	// Русская локализация
	Russian;
	// Рандом
	srand( time( NULL ) );
	// Обьект магазина
	Shop p( "Днс" );
	// "старт" прогаммы
	Menu::start( p );
	return 0;
}