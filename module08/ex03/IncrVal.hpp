#ifndef INCRVAL_HPP
# define INCRVAL_HPP

# include "IInstruction.hpp"

class	IncrVal: public IInstruction
{
private:
	IncrVal&	operator=(IncrVal const& incr_val);

public:
	IncrVal();
	IncrVal(IncrVal const& incr_val);
	virtual ~IncrVal();
	virtual void	execute(
		std::deque<char>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const;
};

#endif
