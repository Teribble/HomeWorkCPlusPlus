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

int counterFileLines( std::string file )
{
    // Счетчик(counter), буфферная строка и поток чтения из файла
    int counter = 0;
    std::string buffer;
    std::ifstream in( file );

    if(in.is_open())
    {
        while(getline( in , buffer ))
        {
            counter++;
        }

        in.close();
    }

    return counter;
}

std::string* readFile( std::string file )
{
    int counter = counterFileLines( file );
    int i = 0;
    std::string* bufferArray = new std::string[ counter ];
    std::ifstream in( file );
    if(in.is_open())
    {
        while(getline( in , bufferArray[i++])){}
        in.close();
    }

    return bufferArray;
}

std::string* eraseComment( std::string *strings,const int size )
{
    bool flag = false;
    std::string *bufferArray = new std::string[ size ];
    for(int i = 0; i < size; i++)
    {
        for(int j = 1; j <= strings[i].length(); j++)
        {
            if(strings[ i ][ j - 1 ] == '/' && strings[ i ][ j ] == '/')
            {
                strings[ i ].erase( j - 1);
                bufferArray[ i ] = strings[ i ];
                break;
            }
            else if(strings[ i ][ j - 1 ] == '/' && strings[ i ][ j ] == '*')
            {
                for(int k = 1; k < strings[ i ].length(); k++)
                {
                    flag = true;
                    if(strings[ i ][ k - 1 ] == '*' && strings[ i ][ k ] == '/')
                    {
                        std::string buffer;
                        flag = false;
                        bufferArray[ i ] = strings[ i ];
                        strings[ i ].erase( j - 1 );
                        buffer += strings[ i ];
                        bufferArray[ i ].erase( 0 , k + 1 );
                        buffer += bufferArray[ i ];
                        bufferArray[ i ].erase( 0 );
                        strings[ i ].erase( 0 );
                        strings[ i ] = buffer;
                        bufferArray[ i ] = buffer;
                        
                        break;
                    }
                }
                if(flag == true)
                {
                    strings[ i ].erase( j - 1 );
                    bufferArray[ i ] = strings[ i ];
                    break;
                }
                i--;
                break;
            }
            else if(flag == true && strings[ i ][ j - 1 ] != '*' && strings[ i ][ j ] != '/')
            {
                for(int k = 1; k <= strings[ i ].length(); k++)
                {
                    if(strings[ i ][ k - 1 ] == '*' && strings[ i ][ k ] == '/')
                    {
                        flag = false;
                        strings[ i ].erase( 0 , k + 1 );
                        bufferArray[ i ] = strings[ i ];
                        break;
                    }
                }
                if(flag == true)
                {
                    strings[ i ].erase( 0 );
                    bufferArray[ i ] = strings[ i ];
                }
            }
            else
            {
                bufferArray[ i ] = strings[ i ];
            }
        }
    }

    return bufferArray;
}

void printStringArray( const std::string* array , const int size )
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }
}


