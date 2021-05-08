#include "IInstruction.hpp"

class	InstrLeft: public IInstruction
{
public:
	InstrLeft();
	InstrLeft(InstrLeft const& il);
	virtual ~InstrLeft();
	InstrLeft&	operator=(InstrLeft const& il);
	virtual void	execute(char* ptr);
};
