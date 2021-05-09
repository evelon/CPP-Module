#ifndef DECRPTR_HPP
# define DECRPTR_HPP

# include "IInstruction.hpp"

class	DecrPtr: public IInstruction
{
private:
	static const char	symbol = '<';
	DecrPtr(DecrPtr const& decr_ptr);
	DecrPtr&	operator=(DecrPtr const& decr_ptr);

public:
	DecrPtr();
	virtual ~DecrPtr();
	virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		);
};

#endif
