#include "DecrVal.hpp"

DecrVal::DecrVal() {}

DecrVal::~DecrVal() {}

char const&	DecrVal::getSymbol(void)
{
	return (this->symbol);
}

void	DecrVal::execute(
	std::deque<IInstruction*>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	)
{
	(*ptr)--;
	it++;
}