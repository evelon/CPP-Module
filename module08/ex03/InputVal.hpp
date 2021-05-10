#ifndef INPUTVAL_HPP
# define INPUTVAL_HPP

#include "IInstruction.hpp"
#include <cstdio>

class	InputVal: public IInstruction
{
private:
	InputVal&	operator=(InputVal const& input_val);

public:
	InputVal();
	InputVal(InputVal const& input_val);
	virtual ~InputVal();
	virtual void	execute(
		std::deque<uint8_t>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const;
};

#endif
