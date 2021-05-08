#include "InstrMinus.hpp"

InstrMinus::InstrMinus() {}

InstrMinus::InstrMinus(InstrMinus const& im)
{
	static_cast<void>(im);
}

InstrMinus::~InstrMinus() {}

InstrMinus&	InstrMinus::operator=(InstrMinus const& im)
{
	static_cast<void>(im);
}

void	InstrMinus::execute(char* ptr)
{
	*ptr--;
}