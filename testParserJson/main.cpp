#include "Groupss.h"

// Написать свой псевдопарсер, с помощью которого можно создать описанный объект в json файле
// Задание очень понравилось, хотя много было психов :D

int main()
{
	// Парсим файл в строку
	std::string stringJson = JSONParsing::parseToString( "group.json" );

	// Создаем экземпляр группы
	Groupss h;

	// Парси стрингу в объект
	h.initJson( stringJson );

	// Выводим объект в консоль
	h.printGroup();

	return 0;
}