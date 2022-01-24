#include "Helper/Helper.h"
#include "ConsoleManagement.h"

//�������� ����� ����������� ��������
//
//����� ������ ���� ����������
//������ ���� ������ :
//-��������� ������� � ������ �������;
//-����� ������ ������������� �����;
//-������� �������
//- ������������ ������� ��������� �������
//- ������������ ������� ���� ������
//
//������� ��������� ������ ���������� ��� ������ ������������������� ������������ ���������


int main()
{
	Russian;

	// ������� ��������� �� ��������� ������
	ConsoleManagement* console = ConsoleManagement::getInstance();

	// ��������� ������� � ��������� ����������
	console->setCursorPosition( 10 , 10 );

	// � ���������� � ������, ���� ��������, � ������� ������� ����� ���������� ����, ��� �� ����� console->setColorText(RED);
	console->setColorText(Color::RED);

	// ��� ������� ������ �������
	ConsoleManagement::getInstance()->clearConsole();
	console->clearConsole();

	// ��� ������, ������� ��������� ��������� ���������� �������, ������� �� ���������� � ������� ������ setCursorPosition()
	std::cout << console->getLastPositionX() << " " << console->getLastPositionY() << std::endl;

	// ��������� ����, ������� �� ���������� setColorText()
	std::cout << console->getLastColorText();

	// ���������� ���� �������
	console->setColorText( 0 );

	// ������� ������ ���� ConsoleManagement
	console->release();

	return 0;
}