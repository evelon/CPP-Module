#include "OutputVal.hpp"

OutputVal::OutputVal() {}

OutputVal::OutputVal(OutputVal const& output_val)
{
	(void)output_val;
}

OutputVal::~OutputVal() {}

void	OutputVal::execute(
	std::deque<char>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	std::cout << *ptr;
	it++;
}