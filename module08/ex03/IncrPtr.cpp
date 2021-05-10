#include "IncrPtr.hpp"

IncrPtr::IncrPtr() {}

IncrPtr::IncrPtr(IncrPtr const& incr_ptr)
{
	(void)incr_ptr;
}

IncrPtr::~IncrPtr() {}

void	IncrPtr::execute(
	std::deque<char>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	ptr++;
	it++;
}