#include "DecrPtr.hpp"

DecrPtr::DecrPtr() {}

DecrPtr::~DecrPtr() {}

char const&	DecrPtr::getSymbol(void)
{
	return (this->symbol);
}

void	DecrPtr::execute(
	std::deque<IInstruction*>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	)
{
	ptr--;
	it++;
}