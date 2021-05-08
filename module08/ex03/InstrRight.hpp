#include "IInstruction.hpp"

class	InstrRight: public IInstruction
{
public:
	InstrRight();
	InstrRight(InstrRight const& ir);
	virtual ~InstrRight();
	InstrRight&	operator=(InstrRight const& ir);
	virtual void	execute(char* ptr);
};
