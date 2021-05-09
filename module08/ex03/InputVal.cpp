#include "InputVal.hpp"

InputVal::InputVal() {}

InputVal::~InputVal() {}

char const&	InputVal::getSymbol(void)
{
	return (this->symbol);
}

void	InputVal::execute(
	std::deque<IInstruction*>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	)
{
	*ptr = getchar();
	it++;
}