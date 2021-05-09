#include "LoopStart.hpp"

LoopStart::LoopStart() {}

LoopStart::~LoopStart() {}

char const&	LoopStart::getSymbol(void)
{
	return (this->symbol);
}

void	LoopStart::execute(
	std::deque<IInstruction*>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	)
{
	if (*ptr != 0)
	{
		it++;
		return ;
	}
	int	level = 0;
	while ((*it)->getSymbol() != ']' && level != 0)
	{
		if ((*it)->getSymbol() == '[')
			level++;
		else if ((*it)->getSymbol() == ']')
			level--;
		it++;
	}
	return ;
}