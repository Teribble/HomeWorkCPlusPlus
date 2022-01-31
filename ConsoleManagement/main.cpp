#include "Helper/Helper.h"
#include "ConsoleManagement.h"

//Написать класс управлением консолью
//
//Класс должен быть синглтоном
//Должны быть методы :
//-установки курсора в нужную позицию;
//-ввода текста определенного цвета;
//-очистки консоли
//- возвращающие текущее положение курсора
//- возвращающий текущий цвет текста
//
//Задание выполнять весьма желательно при помощи последовательностей виртуального терминала


int main()
{
	Russian;

	// Создаем указатель на экземпляр класса
	ConsoleManagement* console = ConsoleManagement::getInstance();

	// Установка курсора в введенные координаты
	console->setCursorPosition( 10 , 10 );

	// В подсказках к методу, есть значения, с помощью которых можем установить цвет, так же можно console->setColorText(RED);
	console->setColorText(Color::RED);

	// Два способа вызова методов
	ConsoleManagement::getInstance()->clearConsole();
	console->clearConsole();

	// Два метода, которые возращают последние координаты курсора, которые мы установили с помощью метода setCursorPosition()
	std::cout << console->getLastPositionX() << " " << console->getLastPositionY() << std::endl;

	// Возращает цвет, который мы установили setColorText()
	std::cout << console->getLastColorText();

	// Сбрасываем цвет консоли
	console->setColorText( 0 );

	// Удаляем объект типа ConsoleManagement
	console->release();

	return 0;
}