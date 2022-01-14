#pragma once

#include <iostream>
#include <windows.h>
#include <ctime>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#define ChristmasTreeHeight 11
#define WindowsSize system("mode con cols=22 lines=15")

void setCursor( int x , int y )
{
    HANDLE console = GetStdHandle( STD_OUTPUT_HANDLE );
    COORD cursorPosition{ x,y };
    SetConsoleCursorPosition( console , cursorPosition );
}

void printTree()
{
    std::cout
        << "          " << YELLOW << "*" << RESET << "           " << std::endl
        << "         $*$         " << std::endl
        << "        *****        " << std::endl
        << "       $*****$       " << std::endl
        << "      *********      " << std::endl
        << "     $*********$     " << std::endl
        << "    *************     " << std::endl
        << "   $*************$   " << std::endl
        << "  *****************  " << std::endl
        << " $*****************$ " << std::endl
        << "*********************" << std::endl
        << "| |  |   ***   | |  |" << std::endl
        << "         ***     " << std::endl
        << "         ***     " << std::endl;
}

int getRandomNumber( int min , int max )
{
    return min + rand() % ( max - min + 1 );
}

void printColorStar( int randomInt )
{
    switch(randomInt)
    {
        case 1:
            std::cout << RED << "*" << RESET;
            break;
        case 2:
            std::cout << GREEN << "*" << RESET;
            break;
        case 3:
            std::cout << RESET << "*" << RESET;
            break;
        case 4:
            std::cout << BLUE << "*" << RESET;
            break;
        case 5:
            std::cout << MAGENTA << "*" << RESET;
            break;
        case 6:
            std::cout << CYAN << "*" << RESET;
            break;
        case 7:
            std::cout << RESET << "*" << RESET;
            break;
    }
}

void setSizeConsoleWindows( int width , int height )
{
    HWND hWindowConsole = GetConsoleWindow();
    RECT r;
    GetWindowRect( hWindowConsole , &r ); //stores the console's current dimensions
    MoveWindow( hWindowConsole , r.left , r.top , width , height , TRUE );
}

void deleteCursor()
{
    HANDLE console = GetStdHandle( STD_OUTPUT_HANDLE );
    CONSOLE_CURSOR_INFO info{ 100,false };
    SetConsoleCursorInfo( console , &info );
}

// В этом месте не смог придумать как избежать магических чисел ((
void garland(int num)
{
    int randomInt = 0;
    int randomColor = 0;
    switch(num)
    {
        case 1:
            randomInt = getRandomNumber( 10 , 10 );
             setCursor( randomInt , num );
             randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 2:
             randomInt = getRandomNumber( 9 , 11 );
            setCursor( randomInt , num );
             randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 3:
             randomInt = getRandomNumber( 8 , 12 );
             setCursor( randomInt , num );
             randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 4:
             randomInt = getRandomNumber( 7 , 13 );
             setCursor( randomInt , num );
             randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 5:
             randomInt = getRandomNumber( 6 , 14 );
             setCursor( randomInt , num );
             randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 6:
             randomInt = getRandomNumber( 5 , 15 );
             setCursor( randomInt , num );
             randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 7:
             randomInt = getRandomNumber( 4 , 16 );
             setCursor( randomInt , num );
             randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 8:
            randomInt = getRandomNumber( 3 , 17 );
            setCursor( randomInt , num );
            randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 9:
            randomInt = getRandomNumber( 2 , 18 );
            setCursor( randomInt , num );
            randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
        case 10:
            randomInt = getRandomNumber( 1 , 19 );
            setCursor( randomInt , num );
            randomColor = getRandomNumber( 1 , 7 );
            printColorStar( randomColor );
            break;
    }
}