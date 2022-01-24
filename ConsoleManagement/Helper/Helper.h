#pragma once

#pragma region includes

#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <vector>
#include <ctime>
#include <fstream>

#pragma endregion includes

#pragma region defines

#define Russian setlocale(LC_ALL, "RUS")

#pragma endregion defines

#pragma region numColor

enum Color
{
	RED = 31 ,BLACK = 30 ,GREEN = 32 ,YELLOW = 33 ,BLUE = 34,MAGENTA = 35 ,LIGHTBLUE = 36 ,WHITE = 37 ,RESET = 0
};

#pragma endregion Color