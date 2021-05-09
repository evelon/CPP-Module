#ifndef LOOPSTART_HPP
# define LOOPSTART_HPP

#include "IInstruction.hpp"

class	LoopStart: public IInstruction
{
private:
	static const char	symbol = '[';
	LoopStart(LoopStart const& loop_start);
	LoopStart&	operator=(LoopStart const& loop_start);

public:
	LoopStart();
	virtual ~LoopStart();
	virtual char const&	getSymbol(void);
	virtual void	execute(
		std::deque<IInstruction*>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		);
};

#endif
