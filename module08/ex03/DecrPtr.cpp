#include "DecrPtr.hpp"

DecrPtr::DecrPtr() {}

DecrPtr::DecrPtr(DecrPtr const& decr_ptr)
{
	(void)decr_ptr;
}

DecrPtr::~DecrPtr() {}


void	DecrPtr::execute(
	std::deque<char>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	ptr--;
	it++;
}