#include <queue>
#include <array>
#include <exception>
#include "IInstruction.hpp"
#include "InstrRight.hpp"

class	Executer
{
private:
	std::array<char, 30000>				memory;
	std::array<char, 30000>::iterator	ptr;
	std::deque<IInstruction>			instrQ;
	std::deque<IInstruction>::iterator	instrIter;

	void	loopInstr(void);

	class	OutOfBoundsException: public std::exception
	{
		virtual const char*	what(void) const throw();
	};

public:
	Executer();
	Executer(Executer const& executer);
	~Executer();
	Executer&	operator=(Executer const& executer);
	void	getInstruction(char c);
	void	execute(void);
};
