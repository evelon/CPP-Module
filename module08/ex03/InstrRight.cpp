#include "InstrRight.hpp"

InstrRight::InstrRight() {}

InstrRight::InstrRight(InstrRight const& ir)
{
	static_cast<void>(ir);
}

InstrRight::~InstrRight() {}

InstrRight&	InstrRight::operator=(InstrRight const& ir)
{
	static_cast<void>(ir);
}

void	InstrRight::execute(char* ptr)
{
	ptr++;
}