#include "IncrVal.hpp"

IncrVal::IncrVal() {}

IncrVal::~IncrVal() {}

char const&	IncrVal::getSymbol(void)
{
	return (this->symbol);
}

void	IncrVal::execute(
	std::deque<IInstruction*>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	)
{
	(*ptr)++;
	it++;
}