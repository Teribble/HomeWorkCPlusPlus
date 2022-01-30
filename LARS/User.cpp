#include "User.h"

int User::global_id = 0;

User::User()
{
	global_id++;
	this->login = "login";
	this->password = "password";
	this->userID = global_id;
}

User::User( std::string login , std::string password )
{
	global_id++;
	this->login = login;
	this->password = password;
	this->userID = global_id;
}

User::User( const User& user )
{
	login = user.login;
	password = user.password;
}

std::string User::getLogin() const
{
	return login;
}

std::string User::getPassword() const
{
	return password;
}

int User::getUserID() const
{
	return userID;
}

void User::setLogin( std::string login )
{
	this->login = login;
}

void User::setPassword( std::string password )
{
	this->password = password;
}

bool operator==( const User& left , const User& right )
{
	return ( left.login == right.login && left.password == right.password );
}

bool operator!=( const User& left , const User& right )
{
	return !( left == right );
}

User& User::operator=( const User& user )
{
	login = user.login;
	password = user.password;
	return *this;
}