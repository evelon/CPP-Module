#include "LoopStart.hpp"

LoopStart::LoopStart() {}

LoopStart::LoopStart(LoopStart const& loop_start)
{
	(void)loop_start;
}

LoopStart::~LoopStart() {}

void	LoopStart::execute(
	std::deque<uint8_t>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	if (*ptr != 0)
	{
		it++;
		return ;
	}
	int	level = 1;
	while (level != 0)
	{
		it++;
		if (*it == LOOP_START)
			level++;
		else if (*it == LOOP_END)
			level--;
	}
	return ;
}