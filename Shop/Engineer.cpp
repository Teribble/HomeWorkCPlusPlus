#include "Engineer.h"

std::string Engineer::getPeriodOfExecution() const
{
    return periodOfExecution;
}

void Engineer::ordering()
{
    Client client( Helper::getRandomLine( BASE_OF_CLIENTS ) );
    order = new RepairOrder( ( double )Helper::getRandomInt( 600 , 5600 ) , this->getName() , client.getName() );
}
