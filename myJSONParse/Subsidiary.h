#pragma once
#include <string>
#include <iostream>
#include <fstream>

// Макросы для текста, вставить в выводе, на пример
// std::cout<<RED_TEXT<<"Hello"<<DEFAULT_TEXT<<std::endl;
#define RED_TEXT "\033[1;31m" // Красный
#define BLUE_TEXT "\033[1;34m" // Голубой
#define GREEN_TEXT "\033[1;32m" // Голубой
#define BLUE_TEXT "\033[1;34m" // Красный
#define DEFAULT_TEXT "\033[1;0m" // Сброс
