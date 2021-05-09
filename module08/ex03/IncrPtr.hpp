#ifndef INCRPTR_HPP
# define INCRPTR_HPP

#include "IInstruction.hpp"

class	IncrPtr: public IInstruction
{
private:
	static const char	symbol = '-';
	IncrPtr(IncrPtr const& incr_ptr);
	IncrPtr&	operator=(IncrPtr const& incr_ptr);

public:
	IncrPtr();
	virtual ~IncrPtr();
	virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		);
};

#endif
