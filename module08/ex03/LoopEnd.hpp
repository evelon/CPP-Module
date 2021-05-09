#ifndef LOOPEND_HPP
# define LOOPEND_HPP

#include "IInstruction.hpp"

class	LoopEnd: public IInstruction
{
private:
	static const char	symbol = ']';
	LoopEnd(LoopEnd const& loop_end);
	LoopEnd&	operator=(LoopEnd const& loop_end);

public:
	LoopEnd();
	virtual ~LoopEnd();
	virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		);
};

#endif
