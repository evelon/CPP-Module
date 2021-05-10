#ifndef OUTPUTVAL_HPP
# define OUTPUTVAL_HPP

#include "IInstruction.hpp"
#include <iostream>

class	OutputVal: public IInstruction
{
private:
	OutputVal&	operator=(OutputVal const& output_val);

public:
	OutputVal();
	OutputVal(OutputVal const& output_val);
	virtual ~OutputVal();
	virtual void	execute(
		std::deque<char>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const;
};

#endif
