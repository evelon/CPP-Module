#include "IncrPtr.hpp"

IncrPtr::IncrPtr() {}

IncrPtr::~IncrPtr() {}

char const&	IncrPtr::getSymbol(void)
{
	return (this->symbol);
}

void	IncrPtr::execute(
	std::deque<IInstruction*>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	)
{
	ptr++;
	it++;
}