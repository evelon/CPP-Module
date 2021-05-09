#ifndef EXECUTER_HPP
# define EXECUTER_HPP

# include <deque>
# include <array>

# include "IncrPtr.hpp"
# include "DecrPtr.hpp"
# include "IncrVal.hpp"
# include "DecrVal.hpp"
# include "InputVal.hpp"
# include "OutputVal.hpp"
# include "LoopStart.hpp"
# include "LoopEnd.hpp"

class	Executer
{
private:
	std::array<char, 30000>				memory;
	std::array<char, 30000>::iterator	ptr;
	std::deque<IInstruction*>			instrQ;
	std::deque<IInstruction*>::iterator	instrIter;

	static const char					instrSymbols[8];
	static const IncrPtr				incrPtr;
	static const DecrPtr				decrPtr;
	static const IncrVal				incrVal;
	static const DecrVal				decrVal;
	static const InputVal				inputVal;
	static const OutputVal				outputVal;
	static const LoopStart				loopStart;
	static const LoopEnd				loopEnd;
	static const IInstruction* const	instrList[8];

public:
	Executer();
	Executer(Executer const& executer);
	~Executer();
	Executer&	operator=(Executer const& executer);
	void	storeInstr(char c);
	void	execute(void);
};

#endif