#include "InstrPlus.hpp"

InstrPlus::InstrPlus() {}

InstrPlus::InstrPlus(InstrPlus const& ip)
{
	static_cast<void>(ip);
}

InstrPlus::~InstrPlus() {}

InstrPlus&	InstrPlus::operator=(InstrPlus const& ip)
{
	static_cast<void>(ip);
}

void	InstrPlus::execute(char* ptr)
{
	*ptr++;
}