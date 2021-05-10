#ifndef INCRPTR_HPP
# define INCRPTR_HPP

# include "IInstruction.hpp"

class	IncrPtr: public IInstruction
{
private:
	IncrPtr&	operator=(IncrPtr const& incr_ptr);

public:
	IncrPtr();
	IncrPtr(IncrPtr const& incr_ptr);
	virtual ~IncrPtr();
	virtual void	execute(
		std::deque<uint8_t>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const;
};

#endif
