#ifndef DECRVAL_HPP
# define DECRVAL_HPP

# include "IInstruction.hpp"

class	DecrVal: public IInstruction
{
private:
	DecrVal&	operator=(DecrVal const& decr_val);

public:
	DecrVal();
	DecrVal(DecrVal const& decr_val);
	virtual ~DecrVal();
	virtual void	execute(
		std::deque<char>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const;
};

#endif
