#include "Salesman.h"

void Salesman::ordering()
{
	Client client( Helper::getRandomLine( BASE_OF_CLIENTS ) );
	order = new SalesOrder( ( double )Helper::getRandomInt( 100 , 1500 ) , this->getName() , client.getName());
}
