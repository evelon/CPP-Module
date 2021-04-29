#include "StripMiner.hpp"

StripMiner::StripMiner(void) {}

StripMiner::StripMiner(StripMiner const& sm)
{
	(void)sm;
}

StripMiner::~StripMiner(void) {}

StripMiner&	StripMiner::operator=(StripMiner const& sm)
{
	(void)sm;
	return (*this);
}

void	StripMiner::mine(IAsteroid* ia)
{
	std::cout << "* strip mining... got " << ia->beMined(this) << "! *\n";
}
