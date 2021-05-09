#ifndef OUTPUTVAL_HPP
# define OUTPUTVAL_HPP

#include "IInstruction.hpp"
#include <iostream>

class	OutputVal: public IInstruction
{
private:
	static const char	symbol = ',';
	OutputVal(OutputVal const& output_val);
	OutputVal&	operator=(OutputVal const& output_val);

public:
	OutputVal();
	virtual ~OutputVal();
	virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		);
};

#endif
