#pragma once
// При компиляции возникает ошибка, что используется старый функционал
#pragma warning (disable: 4996) // - решает проблему

enum Number
{
    ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,TEN
};
#pragma region include

#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <iomanip>

#pragma endregion include
namespace hl
{
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

// Функция установки курсора по заданным координатам (include windows.h)
    inline void setCursorPosition( const int X , const int Y )
    {
        HANDLE console = GetStdHandle( STD_OUTPUT_HANDLE );
        COORD cursorPosition{ X,Y };
        SetConsoleCursorPosition( console , cursorPosition );
    }

    // Функция которая удаляет курсор из консоли (include windows.h)
    inline void deleteCursor()
    {
        HANDLE console = GetStdHandle( STD_OUTPUT_HANDLE );
        CONSOLE_CURSOR_INFO info{ 100,false };
        SetConsoleCursorInfo( console , &info );
    }

    // Функция, возращающая указатель на массив в котором содержится текущее время (include ctime)
    inline char* printCurrentTime()
    {
        time_t now = time( NULL );
        char* time = ctime( &now );
        return time;
    }

    // Полоса загрузки
    inline void loadingBar()
    {
        std::cout << "Loading...";
        for(int i = 0; i < 25; i++)
        {
            Sleep( 100 );
            std::cout << TEXT_RED << ( char )219 << TEXT_RESET;
        }
        std::cout << TEXT_GREEN << "COMPLATE" << TEXT_RESET << std::endl;
    }

    // Функция для ограничения размера окна консоли(width, height)
    inline void setWindowSize( int width , int height )
    {
        HWND hWindowConsole = GetConsoleWindow();
        RECT r;
        GetWindowRect( hWindowConsole , &r ); //stores the console's current dimensions
        MoveWindow( hWindowConsole , r.left , r.top , width , height , TRUE );
    }


#pragma endregion function
}