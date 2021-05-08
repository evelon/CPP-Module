#include <iostream>
#include "InstrDot.hpp"

InstrDot::InstrDot() {}

InstrDot::InstrDot(InstrDot const& id)
{
	static_cast<void>(id);
}

InstrDot::~InstrDot() {}

InstrDot&	InstrDot::operator=(InstrDot const& id)
{
	static_cast<void>(id);
}

void	InstrDot::execute(char* ptr)
{
	std::cout << *ptr;
}