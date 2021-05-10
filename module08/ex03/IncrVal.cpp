#include "IncrVal.hpp"

IncrVal::IncrVal() {}

IncrVal::IncrVal(IncrVal const& incr_val)
{
	(void)incr_val;
}

IncrVal::~IncrVal() {}

void	IncrVal::execute(
	std::deque<char>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	(*ptr)++;
	it++;
}