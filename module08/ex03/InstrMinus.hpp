#include "IInstruction.hpp"

class	InstrMinus: public IInstruction
{
public:
	InstrMinus();
	InstrMinus(InstrMinus const& im);
	virtual ~InstrMinus();
	InstrMinus&	operator=(InstrMinus const& im);
	virtual void	execute(char* ptr);
};
