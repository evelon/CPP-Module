#include "OutputVal.hpp"

OutputVal::OutputVal() {}

OutputVal::~OutputVal() {}

char const&	OutputVal::getSymbol(void)
{
	return (this->symbol);
}

void	OutputVal::execute(
	std::deque<IInstruction*>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	)
{
	std::cout << *ptr;
	it++;
}