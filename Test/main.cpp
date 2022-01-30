#include <iostream>
#include <string>

enum Time
{
	one, two
};
int main()
{
	Time t = Time::one;
	if(NULL == t)
	{
		std::cout << "DA";
	}
	else
	{
		std::cout << "NO";
	}
	return 0;
}