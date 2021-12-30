#pragma once
#include "HelperInclude.h"

class JSONParsing
{
public:
#pragma region Methods
	// ���� ������ ��������� ��������� � ������
	static int myFind(const std::string str , const std::string key );

	// ��������� ������, ���� ��������� ������ � ��������� �����, ����
	static bool myFindBool(const std::string str , const std::string key );
	
	// ������ json ���� � ������
	static std::string parseToString( const std::string file );

	// ���� �������� �� �����
	static std::string getValue( const std::string stroke , const std::string key );

	// ���� ������� �������� � ������
	static int getValueInt( const std::string stroke );
#pragma endregion Methods
};

