#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void) {}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const& dcm) {}

DeepCoreMiner::~DeepCoreMiner(void) {}

DeepCoreMiner&	DeepCoreMiner::operator=(DeepCoreMiner const& dcm)
{
	return (*this);
}

void	DeepCoreMiner::mine(IAsteroid* ia)
{
	std::cout << "* mining deep... got " << ia->beMined(this) << "! *\n";
}
