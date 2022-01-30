#include "JSON_NODE.h"

JSON_NODE::~JSON_NODE()
{
	for(auto node : objects)
	{
		delete node.second;
	}
	for(auto node : arrays)
	{
		delete node.second;
	}
}
