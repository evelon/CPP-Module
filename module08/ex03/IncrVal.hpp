#ifndef INCRVAL_HPP
# define INCRVAL_HPP

# include "IInstruction.hpp"

class	IncrVal: public IInstruction
{
private:
	static const char	symbol = '+';
	IncrVal(IncrVal const& incr_val);
	IncrVal&	operator=(IncrVal const& incr_val);

public:
	IncrVal();
	virtual ~IncrVal();
	virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		);
};

#endif
