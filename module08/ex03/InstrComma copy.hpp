#include "IInstruction.hpp"

class	InstrStart: public IInstruction
{
public:
	InstrStart();
	InstrStart(InstrStart const& is);
	virtual ~InstrStart();
	InstrStart&	operator=(InstrStart const& is);
	virtual void	execute(std::array<char, 30000>::iterator ptr) = 0;
};
