#pragma once
#include <iostream>

// ������� ������ ������
std::string compressText( const std::string text );

// ������� ������� ������� ����������� �� ������, ���� ��� ����
void deleteComment( const std::string text );

// �������, ������� ���� ��������� ��������� � ������ � �������� �� ��������
std::string searchAndHighlight( std::string text , const std::string chars );