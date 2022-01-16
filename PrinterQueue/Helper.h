#pragma once
// ��� ���������� ��������� ������, ��� ������������ ������ ���������
#pragma warning (disable: 4996) // - ������ ��������

#pragma region include

#include <iostream>
#include <windows.h>
#include <ctime>

#pragma endregion include

#pragma region Text_color

#define TEXT_RESET   "\033[0m"
#define TEXT_BLACK   "\033[30m"
#define TEXT_RED     "\033[31m"
#define TEXT_GREEN   "\033[32m"
#define TEXT_YELLOW  "\033[33m"
#define TEXT_BLUE    "\033[34m"
#define TEXT_MAGENTA "\033[35m"
#define TEXT_CYAN    "\033[36m"
#define TEXT_WHITE   "\033[37m"

#pragma endregion Text_color

#pragma region function

// ������� ��������� ������� �� �������� ����������� (include windows.h)
void setCursorPosition( const int X , const int Y )
{
    HANDLE console = GetStdHandle( STD_OUTPUT_HANDLE );
    COORD cursorPosition{ X,Y };
    SetConsoleCursorPosition( console , cursorPosition );
}

// ������� ������� ������� ������ �� ������� (include windows.h)
void deleteCursor()
{
    HANDLE console = GetStdHandle( STD_OUTPUT_HANDLE );
    CONSOLE_CURSOR_INFO info{ 100,false };
    SetConsoleCursorInfo( console , &info );
}

// �������, ����������� ��������� �� ������ � ������� ���������� ������� ����� (include ctime)
char* printCurrentTime()
{
    time_t now = time( NULL );
    char* time = ctime( &now );
    return time;
}



#pragma endregion function