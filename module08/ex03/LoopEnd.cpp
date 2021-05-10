#include "LoopEnd.hpp"

#include <iostream>

LoopEnd::LoopEnd() {}

LoopEnd::LoopEnd(LoopEnd const& loop_end)
{
	(void)loop_end;
}

LoopEnd::~LoopEnd() {}

void	LoopEnd::execute(
	std::deque<uint8_t>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	if (*ptr == 0)
	{
		it++;
		return ;
	}
	int	level = -1;
	while (level != 0)
	{
		it--;
		if (*it == LOOP_START)
			level++;
		else if (*it == LOOP_END)
			level--;
	}
	return ;
}