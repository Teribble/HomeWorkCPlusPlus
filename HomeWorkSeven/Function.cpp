#include "Function.h"

void compressText( const std::string text )
{
}

void deleteComment( const std::string text )
{
}

std::string searchAndHighlight( const std::string text, const std::string chars )
{
	bool flag = false;
	std::string buffer;
	for(int i = 0; text[i] != '\0'; i++)
	{
		if(text[ i ] == chars[ 0 ])
		{
			for(int j = 0, k = i; chars[j] != '\0'; j++,k++)
			{

				flag = false;

				if(text[ k ] == chars[ j ])
				{
					flag = true;
				}
				else
				{
					break;
				}
			}
		}
	}

	return 0;
}
