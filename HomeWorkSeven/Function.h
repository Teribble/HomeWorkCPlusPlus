#pragma once
#include <iostream>

// Функция сжатия текста
std::string compressText( const std::string text );

// Функция котороя удаляет комментарии из текста, если они есть
void deleteComment( const std::string text );

// Функция, которая ищет вхождение подстроки в строку и выделяет ее скобками
std::string searchAndHighlight( std::string text , const std::string chars );