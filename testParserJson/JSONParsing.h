#pragma once
#include "HelperInclude.h"

class JSONParsing
{
public:
#pragma region Methods
	// Ищет первое вхождение подстроки в строку
	static int myFind(const std::string str , const std::string key );

	// Возращает истину, если подстрока входит в подстроку иначе, ложь
	static bool myFindBool(const std::string str , const std::string key );
	
	// Парсит json файл в строку
	static std::string parseToString( const std::string file );

	// Ищет значение по ключу
	static std::string getValue( const std::string stroke , const std::string key );

	// Ищет интовое значение в строке
	static int getValueInt( const std::string stroke );
#pragma endregion Methods
};

