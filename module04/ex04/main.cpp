#include "Asteroid.hpp"
#include "Comet.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"

int	main()
{
	MiningBarge		mb;
	IMiningLaser*	laser1 = new DeepCoreMiner;
	IMiningLaser*	laser2 = new StripMiner;
	IMiningLaser*	laser3 = new DeepCoreMiner;
	IMiningLaser*	laser4 = new StripMiner;
}