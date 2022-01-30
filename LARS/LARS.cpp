#include "LARS.h"

LARS::LARS()
{
}

void LARS::registration( User user )
{
	if(baseUser.empty())
	{
		baseUser.push_back( user );
		std::cout << "Successful registration\n";
	}
	else if(!baseUser.empty())
	{
		bool flag = false;
		for(size_t i = 0; i < baseUser.size(); i++)
		{
			if(user.getLogin() == baseUser[ i ].getLogin())
			{
				flag = true;
				break;
			}
		}
		if(false == flag)
		{
			baseUser.push_back( user );
			std::cout << "Successful registration\n";
		}
		else
		{
			std::cout << "Login byse\n";
		}
	}
}

bool LARS::login( User user )
{
	return false;
}

void LARS::showUsers()
{
	for(int i = 0; i < baseUser.size(); i++)
	{
		std::cout << "Login: " << baseUser[ i ].getLogin() << "id: " << baseUser[ i ].getUserID() << std::endl;
	}
}
