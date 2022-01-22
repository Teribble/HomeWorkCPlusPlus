#include "Helper.h"

#define BASE_OF_WORKERS "Workers.txt"
#define BASE_OF_CLIENTS "Clients.txt"

int main()
{
	Russian;
	srand( time( NULL ) );
	std::cout << Helper::getRandomLine( BASE_OF_WORKERS ) << std::endl;
	
	return 0;
}