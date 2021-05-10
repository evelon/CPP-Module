#include "DecrVal.hpp"

DecrVal::DecrVal() {}

DecrVal::DecrVal(DecrVal const& decr_val)
{
	(void)decr_val;
}

DecrVal::~DecrVal() {}

void	DecrVal::execute(
	std::deque<char>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	(*ptr)--;
	it++;
}