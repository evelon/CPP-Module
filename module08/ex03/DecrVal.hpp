#ifndef DECRVAL_HPP
# define DECRVAL_HPP

# include "IInstruction.hpp"

class	DecrVal: public IInstruction
{
private:
	static const char	symbol = '<';
	DecrVal(DecrVal const& decr_val);
	DecrVal&	operator=(DecrVal const& decr_val);

public:
	DecrVal();
	virtual ~DecrVal();
	virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		);
};

#endif
