﻿#include "Function.h"


	/*1. Написать функцию , сжимающую текст.
В строке текста записаны слова , разделенные пробелами в произвольном количестве.Сжатие текста состоит
в том , что между словами оставляется по одному пробелу , а после последнего слова пробелы удаляются
( пробелы перед первым словом сохраняются ).Если строка содержит только пробелы , то все они сохраняются.*/

	/*2. Удаление комментариев
Дан текст программы на С++.Комментарии начинаются с "//" и продолжаются до конца текущей строки
или начинаются с "/*" и заканчиваются "/*".В последнем случае комментарии могут быть в середине строки или
располагаться на нескольких строках. Написать функцию , удаляющую комментарии.*/

	/*3. Поиск и выделение
Написать функцию , принимающую в качестве параметров две строки и возвращающую копию первого
параметра , все вхождения второго параметра в которой взяты в «()»
Например , если параметрами были строки
"abaracadabra" и "ab", 
то вернуть надо "(ab)aracad(ab)ra"*/



int main()
{
	setlocale( 0 , "RUS" );

	/////////////////////////////////////////////////////
	//1. Написать функцию , сжимающую текст.
	// Строка которую хотим сжать
	std::string st1 = "   Задача      организации, в особенности же начало повседневной работы по   формированию позиции "
		"способствует       повышению     актуальности  существующих финансовых и административных условий?                Не следует, "
		"однако,     забывать    о  том,   что   реализация намеченного    плана    развития  обеспечивает  актуальность системы масштабного "
		"изменения      ряда параметров?    Соображения высшего порядка, а  также  консультация   с профессионалами из IT позволяет "
		"выполнить важнейшие задания       по разработке      экономической целесообразности принимаемых решений?                     ";
	// Функция сжимающая текст
	std::string st2 = compressText( st1 );
	// Выводим сжатый текст
	std::cout << st2 << std::endl;
	// Если строка только с пробелами то они остаются
	std::string st3 = "     ";
	// Функция сжимающая текст
	std::string st4 = compressText( st3 );
	// Выводим сжатый текст
	std::cout << st4 << std::endl;


	/////////////////////////////////////////////////////
	// 3. Поиск и выделение
    // Строка
    std::string s1 = "ertabcsdftyuabczevbh";
    // Построка которую нужно найти
    std::string s2 = "abc";
	// Вызываем функцию, которая возращает новую строку
	std::string h = searchAndHighlight( s1 , s2 );
	// Выводим новую строку
	std::cout << h << std::endl;

	

	

	return 0;
	
}