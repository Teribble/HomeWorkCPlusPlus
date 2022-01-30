#pragma once
#include "JSON_NODE.h"

class JSON_PARSER
{
public:

	JSON_PARSER( const char* source );

	void parse();

	void print() const;

private:

	JSON_NODE* root;

	const char* source;

	size_t sizeSource;

	size_t currentSourceIndex;

	void assertSize();

	void increment();
};

