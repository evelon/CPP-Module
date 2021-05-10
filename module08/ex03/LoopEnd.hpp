#ifndef LOOPEND_HPP
# define LOOPEND_HPP

#include "IInstruction.hpp"

class	LoopEnd: public IInstruction
{
private:
	LoopEnd&	operator=(LoopEnd const& loop_end);

public:
	LoopEnd();
	LoopEnd(LoopEnd const& loop_end);
	virtual ~LoopEnd();
	virtual void	execute(
		std::deque<uint8_t>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const;
};

#endif
