#include "IInstruction.hpp"

class	InstrDot: public IInstruction
{
public:
	InstrDot();
	InstrDot(InstrDot const& id);
	virtual ~InstrDot();
	InstrDot&	operator=(InstrDot const& id);
	virtual void	execute(char* ptr);
};
