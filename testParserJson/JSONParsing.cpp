#include "JSONParsing.h"

int JSONParsing::myFind(const std::string str , const std::string key )
{
    int result = 0;
	bool flag = false;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[ i ] == key[ 0 ])
		{
			flag = false;
			for(int j = 0,k = i; j < key.length(); j++,k++)
			{
				if(str[ k ] == key[ j ])
				{
					flag = true;
				}
				else
				{
					flag = false;
				}
			}
			if(true == flag)
			{
				return i;
			}
		}
	}
	return 0;
}

bool JSONParsing::myFindBool( const std::string str , const std::string key )
{
	bool flag = false;
	for(int i = 0; i < str.length(); i++)
	{
		if(str[ i ] == key[ 0 ])
		{
			flag = false;
			for(int j = 0 , k = i; j < key.length(); j++ , k++)
			{
				if(str[ k ] == key[ j ])
				{
					flag = true;
				}
				else
				{
					flag = false;
					break;
				}
			}
			if(true == flag)
			{
				return true;
			}
		}
	}
	return false;
}

std::string JSONParsing::parseToString( const std::string file )
{
	std::string result;
	std::string line;
	std::ifstream in( file );
	if(in.is_open())
	{
		while(getline(in,line))
		{
			for(int i = 0; i < line.length(); i++)
			{
				if(line[ i ] != '\t' && line[ i ] != ' ')
				{
					result += line[ i ];
				}
			}
		}
		in.close();
		return result;
	}
}

std::string JSONParsing::getValue( const std::string stroke , const std::string key )
{
	std::string result;
	int pos = JSONParsing::myFind( stroke , key );
	if(pos != std::string::npos)
	{
		pos = stroke.find( ':' , pos );
		if(pos != std::string::npos)
		{
			int aPos = stroke.find( '"' , pos );
			if(aPos != std::string::npos)
			{
				int end = stroke.find( '"' , aPos + 1 );
				if(end != std::string::npos)
				{
					result = stroke.substr( aPos + 1 , end - aPos - 1 );
				}
			}
		}
	}
	return result;
}

int JSONParsing::getValueInt( const std::string stroke )
{
	switch((int)stroke[0])
	{
		case 50:
			return 2;
			break;
		case 51:
			return 3;
			break;
		case 52:
			return 4;
			break;
		case 53:
			return 5;
			break;
		default:
			break;
	}
}
