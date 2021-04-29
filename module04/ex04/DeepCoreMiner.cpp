#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void) {}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const& dcm)
{
	(void)dcm;
}

DeepCoreMiner::~DeepCoreMiner(void) {}

DeepCoreMiner&	DeepCoreMiner::operator=(DeepCoreMiner const& dcm)
{
	(void)dcm;
	return (*this);
}

void	DeepCoreMiner::mine(IAsteroid* ia)
{
	std::cout << "* mining deep... got " << ia->beMined(this) << "! *\n";
}
