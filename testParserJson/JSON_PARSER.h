#pragma once
#include <map>
#include <iostream>

class JSON_PARSER
{
public:

private:
	// ������� ��������� �������
	std::map<std::string , JSON_PARSER*> objects;
	// ������ ��� �� ��� � ������� ��������� ������, ������ � isArray = true;
	std::map<std::string , JSON_PARSER*> arrays;
	// ��������� ��� ������
	std::map<std::string , std::string> strings;
	// �����
	std::map<std::string , double> numbers;
	// ���������� ��� ������ c isBoolean = true;
	std::map<std::string , bool> booleans;
	// ��� ������?
	bool isArray = false;
	// ��� �������?
	bool isBoolean = false;
};

