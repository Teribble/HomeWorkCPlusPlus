#include "Printer.h"
#include <conio.h>
#include "Helper_fail/Helper.h"

int main()
{
	Printer<std::string> printer(5);

	while (_kbhit)
	{
		switch (_getch() - 48)
		{
		case 1:
			setCursorPosition(65, 0);
			std::cout << TEXT_GREEN << "Add admin" << TEXT_RESET << std::endl;
			printer.add("Admin", 5);
			Sleep(300);
			system("cls");
			printer.show();
			break;
		case 2:
			setCursorPosition(65, 0);
			std::cout <<TEXT_GREEN<< "Add user " << TEXT_RESET << std::endl;
			printer.add("User", 1);
			Sleep(300);
			system("cls");
			printer.show();
			break;
		case 3:
			system("cls");
			setCursorPosition(0, 0);
			printer.show();
			break;
		case 4:
			std::cout << "Delete max priority" << std::endl;
			loadingBar();
			printer.pop();
			Sleep(300);
			system("cls");
			printer.show();
			break;
		}
	}
	

	return 0;
}