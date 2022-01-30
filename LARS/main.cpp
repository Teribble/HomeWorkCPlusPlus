#include <iostream>
#include "LARS.h"
#include <string>


int main()
{
	LARS base;
	for(size_t i = 0; i < 10; i++)
	{
		User me( "Teribble" + std::to_string(i) , "1daw13cnm1");
		base.registration( me );
	}
	base.showUsers();

	return 0;
}