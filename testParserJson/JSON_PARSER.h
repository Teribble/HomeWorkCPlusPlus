#pragma once
#include <map>
#include <iostream>

class JSON_PARSER
{
public:

private:
	// Сложные составные объекты
	std::map<std::string , JSON_PARSER*> objects;
	// Храним так же как и сложный составной объект, только с isArray = true;
	std::map<std::string , JSON_PARSER*> arrays;
	// Строковый тип данных
	std::map<std::string , std::string> strings;
	// Цифры
	std::map<std::string , double> numbers;
	// Логический тип данных c isBoolean = true;
	std::map<std::string , bool> booleans;
	// Это массив?
	bool isArray = false;
	// Это булевая?
	bool isBoolean = false;
};

