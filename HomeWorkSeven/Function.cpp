#include "Function.h"

std::string compressText( const std::string text )
{
    std::string bufferString;

    // Булиевая переменная первого вохождения символа пробела
    bool firstSpaces = true;

     // Булиевая переменная символа пробела
    bool space = false;
    
    // Цикл до конца строки
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
    // Бефферная строка
    std::string s = "";

    // Счетчик
    int i;

    // Цикл, пока метод find не вернет -1, решил попробовать не через цикл for
    while(( i = text.find( chars ) ) >= 0)
    {
        // в буффер записываем символы, пока не встретится наша подстрока, как только на встретится, добавляем в нее
        // при помощи конкатинации скобки и подстроку
        s += text.substr( 0 , i ) + "(" + chars + ")";

        // перезаписываем основную строку, от длины первого вхождения + длина подстроки и до конца
        text = text.substr( i + chars.length() );
    }

    // буфферу присваиваем остаток строки
    s += text;

    //выводим измененную строку
    return s;
}
