#pragma once
#include <vector>
#include "User.h"

class User;

class LARS
{
public:
	LARS();
	void registration( User user );
	bool login( User user );
	void showUsers();
private:
	std::vector<User> baseUser;
};

