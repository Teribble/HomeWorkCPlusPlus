#pragma once
#include <map>
#include <iostream>

class JSON_NODE
{
public:

	~JSON_NODE();

private:
	// ������� ��������� �������
	std::map<std::string , JSON_NODE*> objects;
	// ������ ��� �� ��� � ������� ��������� ������, ������ � isArray = true;
	std::map<std::string , JSON_NODE*> arrays;
	// ��������� ��� ������
	std::map<std::string , std::string> strings;
	// �����
	std::map<std::string , double> numbers;
	// ���������� ��� ������ c isBoolean = true;
	std::map<std::string , bool> booleans;
	// ��� ������?
	bool isArray = false;
	// ������� ������?
	bool isNull = false;
};

