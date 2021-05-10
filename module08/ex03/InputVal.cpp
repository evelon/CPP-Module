#include "InputVal.hpp"
#include <iostream>

InputVal::InputVal() {}

InputVal::InputVal(InputVal const& input_val)
{
	(void)input_val;
}

InputVal::~InputVal() {}

void	InputVal::execute(
	std::deque<uint8_t>::iterator& it,
	std::array<char, 30000>::iterator& ptr
	) const
{
	std::cin >> *ptr;
	if (std::cin.eof())
		*ptr = 0;
	it++;
}