#pragma once
#include <iostream>
#include <fstream>
#include <string>

// Функция сжатия текста
std::string compressText( const std::string text );

// Функция, которая ищет вхождение подстроки в строку и выделяет ее скобками
std::string searchAndHighlight( std::string text , const std::string chars );

// Подсчет строк в файле
int counterFileLines( std::string file );

// Считываем файл и преобразуем его в массив строк
std::string* readFile( std::string file);

// Удалить комментарии
std::string* eraseComment( std::string *strings, const int size );

// Вывести в консоль массив стрингов
void printStringArray( const std::string* array , const int size );