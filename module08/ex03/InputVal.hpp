#ifndef INPUTVAL_HPP
# define INPUTVAL_HPP

#include "IInstruction.hpp"
#include <cstdio>

class	InputVal: public IInstruction
{
private:
	static const char	symbol = ',';
	InputVal(InputVal const& input_val);
	InputVal&	operator=(InputVal const& input_val);

public:
	InputVal();
	virtual ~InputVal();
	virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		);
};

#endif
