#include <cstdio>
#include <cstdlib>
#include "InstrComma.hpp"

InstrComma::InstrComma() {}

InstrComma::InstrComma(InstrComma const& ic)
{
	static_cast<void>(ic);
}

InstrComma::~InstrComma() {}

InstrComma&	InstrComma::operator=(InstrComma const& ic)
{
	static_cast<void>(ic);
}

void	InstrComma::execute(char* ptr)
{
	*ptr = getchar();
	if (*ptr == feof(stdin))
		exit(0);
}