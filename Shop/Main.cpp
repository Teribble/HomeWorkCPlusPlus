//������� �������� ������� ��� ���������� "�������"
//� �������� ���� ��������� � �������.
//��� ��� ����� ���.
//� ���������� ���� ������ ������.
//��������� ������� �� ��������� � �����������.
//� �������� � ���������� ����� ��������� ������.
//� ������ ���� ��������� , � ��� ������ �������� , ���������� ����� , � ������.
//�� � ������� �� ������ ���� ��� ���� ����������.
//������� ������ ������� ������� , ������ ���������� � ��������.

//
#include "Client.h"
#include "Worker.h"
#include "Salesman.h"
#include "Engineer.h"
#include "SalesOrder.h"
#include "RepairOrder.h"
#include "Shop.h"
#include "Menu.h"

#define BASE_OF_WORKERS "Base/Workers.txt"
#define BASE_OF_CLIENTS "Base/Clients.txt"


int main()
{
	// ������� �����������
	Russian;
	// ������
	srand( time( NULL ) );
	// ������ ��������
	Shop p( "���" );
	// "�����" ��������
	Menu::start( p );
	return 0;
}