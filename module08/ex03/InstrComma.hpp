#include "IInstruction.hpp"

class	InstrComma: public IInstruction
{
public:
	InstrComma();
	InstrComma(InstrComma const& ic);
	virtual ~InstrComma();
	InstrComma&	operator=(InstrComma const& ic);
	virtual void	execute(char* ptr);
};
