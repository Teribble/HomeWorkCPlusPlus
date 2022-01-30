#include "JSON_PARSER.h"

JSON_PARSER::JSON_PARSER( const char* source )
{
	this->source = source;
	this->sizeSource = strlen( source ) + 1;
	this->currentSourceIndex = 0ULL;
}

void JSON_PARSER::parse()
{
}

void JSON_PARSER::print() const
{
}

void JSON_PARSER::assertSize()
{
	if(currentSourceIndex > sizeSource)
		throw "index is out of bounds";
}

void JSON_PARSER::increment()
{
	++currentSourceIndex;

	assertSize();
}
