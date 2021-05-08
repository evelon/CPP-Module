#include "InstrLeft.hpp"

InstrLeft::InstrLeft() {}

InstrLeft::InstrLeft(InstrLeft const& il)
{
	static_cast<void>(il);
}

InstrLeft::~InstrLeft() {}

InstrLeft&	InstrLeft::operator=(InstrLeft const& il)
{
	static_cast<void>(il);
}

void	InstrLeft::execute(char* ptr)
{
	ptr--;
}