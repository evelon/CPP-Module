#include "IInstruction.hpp"

class	InstrPlus: public IInstruction
{
public:
	InstrPlus();
	InstrPlus(InstrPlus const& ip);
	virtual ~InstrPlus();
	InstrPlus&	operator=(InstrPlus const& ip);
	virtual void	execute(char* ptr);
};
