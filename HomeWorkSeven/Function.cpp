#include "Function.h"

std::string compressText( const std::string text )
{
    std::string bufferString;

    // �������� ���������� ������� ���������� ������� �������
    bool firstSpaces = true;

     // �������� ���������� ������� �������
    bool space = false;
    
    // ���� �� ����� ������
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[ i ] == ' ' && true == firstSpaces)
        {
            bufferString += text[ i ];
        }
        else
        {
            firstSpaces = false;

            if(text[ i ] != ' ')
            {
                bufferString += text[ i ];
                space = false;
            }
            else if(text[ i ] == ' ' && false == space)
            {
                bufferString += text[ i ];
                space = true;
            }
            else if(text[ i ] == ' ' && true == space)
            {
                continue;
            }
            
        }
    }

    return bufferString;
}

void deleteComment( const std::string text )
{
   
}

std::string searchAndHighlight( std::string text, const std::string chars )
{
    // ��������� ������
    std::string s = "";

    // �������
    int i;

    // ����, ���� ����� find �� ������ -1, ����� ����������� �� ����� ���� for
    while(( i = text.find( chars ) ) >= 0)
    {
        // � ������ ���������� �������, ���� �� ���������� ���� ���������, ��� ������ �� ����������, ��������� � ���
        // ��� ������ ������������ ������ � ���������
        s += text.substr( 0 , i ) + "(" + chars + ")";

        // �������������� �������� ������, �� ����� ������� ��������� + ����� ��������� � �� �����
        text = text.substr( i + chars.length() );
    }

    // ������� ����������� ������� ������
    s += text;

    //������� ���������� ������
    return s;
}
