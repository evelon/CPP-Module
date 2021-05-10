#ifndef DECRPTR_HPP
# define DECRPTR_HPP

# include "IInstruction.hpp"

class	DecrPtr: public IInstruction
{
private:
	// static const char	symbol = '<';
	DecrPtr&	operator=(DecrPtr const& decr_ptr);

public:
	DecrPtr();
	DecrPtr(DecrPtr const& decr_ptr);
	virtual ~DecrPtr();
	// virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<char>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const;
};

#endif
