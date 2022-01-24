#pragma once
#include "Helper/Helper.h"

class ConsoleManagement final
{
#pragma region Methods

public:
	// ����� � ������� �������� �������� ������ ������ (��� ������������ ������)
	static ConsoleManagement* getInstance();
	// ������� ������ ConsoleManagement �� ������
	static void release();
	// RED, BLACK, GREEN, YELLOW, BLUE, MAGENTA, LIGHTBLUE, WHITE, RESET 
	void setColorText(int color);
	// "�������" �������
	void clearConsole();
	// ������������� ������ �� ��������� �����������
	void setCursorPosition( int x , int y );
	// ��������� ���������� �, ������� ���� ����������� � �������  ������ setCursorPosition()
	int getLastPositionX() const;
	// ��������� ���������� �, ������� ���� ����������� � �������  ������ setCursorPosition()
	int getLastPositionY() const;
	// ��������� ������ � �������, ������� ��������� ��������� �������������� ���� � ������� ������ setColorText()
	std::string getLastColorText();
	// �������(���������) �������� "�����"
	ConsoleManagement& operator=( const ConsoleManagement& right ) = delete;

#pragma endregion Methods

#pragma region Fields

private:
	// ��������� �� ������ ������� ������, ������� �������� ������������
	static ConsoleManagement* instance;
	// ��������� ����������� �� ���������
	ConsoleManagement();
	// ����������
	~ConsoleManagement();
	// �������(���������) ����������� �����������
	ConsoleManagement( const ConsoleManagement& right ) = delete;
	// ���������� �
	int x;
	// ���������� �
	int y;
	// �������� ����� ������ �������
	int color;
#pragma endregion Fields
};