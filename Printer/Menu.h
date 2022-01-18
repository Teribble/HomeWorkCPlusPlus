#pragma once
#include "Helper_fail/Helper.h"
#include "Printer.h"

#define KEY_ONE 49
#define KEY_TWO 50
#define KEY_THREE 51
#define Three_second 300 //��� �������

class Menu
{
public:
	// �������� ������
	static void showStatus( std::string status );
	// �������� ������ ��������
	static void showActionBar();
	// �������� ��������� ������� �������
	static void showTableHeaderBaseQueue();
	// �������� ��������� ������� ����������
	static void showTableHeaderStatQueue();
	// ��������� ������� �� ������� ������
	static void pressKeyActionBar( Printer<std::string> &printer , int key );
};

