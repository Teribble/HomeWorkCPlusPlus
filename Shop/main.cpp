#include "Helper.h"
#include "Client.h"
#include "Worker.h"
#include "Salesman.h"
#include "Engineer.h"
#include <vector>

int main()
{
	Russian;
	Client cl( "Роман" );
	std::cout << cl.getFullName() << std::endl;
	Worker work( "Денчик" );
	std::cout << work.getFullName() << std::endl;
	Salesman sales( "Ручник" );
	std::cout << sales.getFullName() << " " << sales.getTimeTable() << std::endl;
	Engineer eng( "Пашка" );
	std::cout << eng.getFullName() << " " << eng.getTimeTable() << std::endl;
	std::cout << "\n\n\n";
	
	Worker *o = new Engineer( "sales" );
	std::cout << o->getTimeTable();
	return NULL;
}