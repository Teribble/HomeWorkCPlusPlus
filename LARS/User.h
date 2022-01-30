#pragma once
#include <iostream>


class User
{
public:
	User();
	User( std::string login , std::string password );
	User( const User& user );

	int getUserID() const;
	std::string getLogin() const;
	std::string getPassword() const;

	void setLogin(std::string login);
	void setPassword( std::string password );

	friend bool operator==( const User& left , const User& right );
	friend bool operator!=( const User& left , const User& right );
	User& operator =( const User& user );

private:
	static int global_id;
	int userID;
	std::string login;
	std::string password;
};

