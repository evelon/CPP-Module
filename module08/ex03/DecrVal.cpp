#include "DecrVal.hpp"

DecrVal::DecrVal() {}

DecrVal::DecrVal(DecrVal const& decr_val)
{
	(void)decr_val;
}

DecrVal::~DecrVal() {}

void	DecrVal::execute(
	std::deque<uint8_t>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	(*ptr)--;
	it++;
}