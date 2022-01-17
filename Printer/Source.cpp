#include "Printer.h"
#include <conio.h>
#include "Helper_fail/Helper.h"

int main()
{
	Printer<std::string> printer(5);
	setCursorPosition(0, 15);
	std::cout << "1: Add admin" << std::endl;
	std::cout << "2: Add user" << std::endl;
	std::cout << "3: Delete max pri" << std::endl;
	while (_kbhit)
	{
		switch (_getch() - 48)
		{
		case 1:
			if (!printer.isFull()) {
				setCursorPosition(65, 0);
				std::cout << TEXT_GREEN << "Add admin" << TEXT_RESET << std::endl;
				printer.add("Admin", 5);
				Sleep(300);
				system("cls");
				printer.show();
				setCursorPosition(0, 15);
				std::cout << "1: Add admin" << std::endl;
				std::cout << "2: Add user" << std::endl;
				std::cout << "3: Print max priority" << std::endl;
			}
			else
			{
				setCursorPosition(65, 0);
				std::cout << "Queue is full.";
			}
			break;
		case 2:
			if (!printer.isFull()) {
				setCursorPosition(65, 0);
				std::cout << TEXT_GREEN << "Add user " << TEXT_RESET << std::endl;
				printer.add("User", 1);
				Sleep(300);
				system("cls");
				printer.show();
				setCursorPosition(0, 15);
				std::cout << "1: Add admin" << std::endl;
				std::cout << "2: Add user" << std::endl;
				std::cout << "3: Print max priority" << std::endl;
			}
			else 
			{
				setCursorPosition(65, 0);
				std::cout << "Queue is full.";
			}
			break;
		case 3:
			if (!printer.isEmpty()) {
				setCursorPosition(0, 11);
				std::cout << "Print " << printer.pop() << std::endl;
				std::cout << "Loading...";
				loadingBar();
				Sleep(300);
				system("cls");
				printer.show();
				setCursorPosition(0, 15);
				std::cout << "1: Add admin" << std::endl;
				std::cout << "2: Add user" << std::endl;
				std::cout << "3: Print max priority" << std::endl;
				break;
			}
		}
	}
	

	return 0;
}