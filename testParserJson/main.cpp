#include "Groupss.h"

// �������� ���� ������������, � ������� �������� ����� ������� ��������� ������ � json �����
// ������� ����� �����������, ���� ����� ���� ������ :D

int main()
{
	// ������ ���� � ������
	std::string stringJson = JSONParsing::parseToString( "group.json" );

	// ������� ��������� ������
	Groupss h;

	// ����� ������� � ������
	h.initJson( stringJson );

	// ������� ������ � �������
	h.printGroup();

	return 0;
}