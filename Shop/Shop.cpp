#include "Shop.h"

Shop::Shop()
{
	nameShop = "no name";
}

Shop::Shop( std::string name )
{
	nameShop = name;
}

void Shop::addClient( Client client )
{
	this->client.push_back( client );
}

void Shop::addWorker( Worker worker )
{
	this->worker.push_back( worker );
}

void Shop::initiateASale( int valueOrdering )
{
	for(int i = 0; i < valueOrdering; i++)
	{
		int randomNumber = Helper::getRandomInt( 1 , 2 );
		if(randomNumber == 1)
		{
			Client client( Helper::getRandomLine( BASE_OF_CLIENTS ) );
			Salesman salesman( Helper::getRandomLine( BASE_OF_WORKERS ) );
			Shop::addClient( client );
			Shop::addWorker( salesman );
			salesman.ordering();
			this->history.push_back( salesman.getOrder() );
		}
		else if(randomNumber == 2)
		{
			Client client( Helper::getRandomLine( BASE_OF_CLIENTS ) );
			Engineer enginner( Helper::getRandomLine( BASE_OF_WORKERS ) );
			Shop::addClient( client );
			Shop::addWorker( enginner );
			enginner.ordering();
			this->history.push_back( enginner.getOrder() );
		}
	}
}

void Shop::showHistory()
{
	system( "cls" );
	std::cout << std::right << std::setw( 83 ) << "Название магазина: " << nameShop << std::endl << std::endl;
	std::cout <<std::right<<std::setw(3)<<"№" 
		<< std::right << std::setw(40) << "Имя клиента:"
		<< std::right << std::setw( 40 ) << "Имя сотрудника:"
		<< std::right << std::setw( 10 ) << "Цена:"
		<< std::right << std::setw( 35 ) << "Сроки" << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	for(size_t i = 0; i < this->history.size(); i++)
	{
		std::cout << std::right << std::setw( 3 ) <<i+1
			<< std::right << std::setw( 40 ) << history[i].getNameClient()
			<< std::right << std::setw( 40 ) << history[i].getNameWorker()
			<< std::right << std::setw( 10 ) << history[i].getPrice()
			<< std::right << std::setw( 35 ) << history[i].getPeriodOfExecution() << std::endl;
	}
	std::cout << "--------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Что бы вернуться назад нажмите любую клавишу";
	if(_getch())
	{
		menu();
	}
}

void Shop::showClients()
{
	system( "cls" );
	std::cout << std::right << std::setw( 3 ) << "№"
		<< std::right << std::setw( 40 ) << "Имя клиента" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for(int i = 0; i < this->client.size(); i++)
	{
		std::cout << std::right << std::setw( 3 ) << i + 1
			<< std::right << std::setw( 40 ) << client[i].getName() << std::endl;
	}
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Что бы вернуться назад нажмите любую клавишу";
	if(_getch())
	{
		menu();
	}
}

void Shop::showWorkers()
{
	system( "cls" );
	std::cout << std::right << std::setw( 3 ) << "№"
		<< std::right << std::setw( 40 ) << "Имя работника:"
		<< std::right << std::setw( 40 )<<"Расписание" << std::endl;
	std::cout << "------------------------------------------------------------------------------------" << std::endl;
	for(size_t i = 0; i < this->worker.size(); i++)
	{
		std::cout << std::right << std::setw( 3 )<<i+1
			<< std::right << std::setw( 40 ) << this->worker[ i ].getName() << " "
			<< std::right << std::setw( 40 ) << this->worker[ i ].getSchedule() << std::endl;
	}
	std::cout << "------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Что бы вернуться назад нажмите любую клавишу";
	if(_getch())
	{
		menu();
	}
}

void Shop::menu()
{
	system( "cls" );
	std::cout << "1: Добавить 10 продаж\n"
		<< "2: Показать статистику магазина\n"
		<< "3: Показать сотрудников\n"
		<< "4: Показать клиентов\n"
		<< "5: Выход\n";
}
