#ifndef IINSTRUCTION_HPP
# define IINSTRUCTION_HPP

#include <deque>
#include <array>

class	IInstruction
{
public:
	virtual ~IInstruction();
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) = 0;
	virtual char const&	getSymbol(void) = 0;
};

#endif