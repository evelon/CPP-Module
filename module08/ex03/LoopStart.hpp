#ifndef LOOPSTART_HPP
# define LOOPSTART_HPP

#include "IInstruction.hpp"

class	LoopStart: public IInstruction
{
private:
	LoopStart&	operator=(LoopStart const& loop_start);

public:
	LoopStart();
	LoopStart(LoopStart const& loop_start);
	virtual ~LoopStart();
	virtual void	execute(
		std::deque<uint8_t>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const;
};

#endif
