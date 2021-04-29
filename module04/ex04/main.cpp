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
	IMiningLaser*	laser5 = new DeepCoreMiner;

	IAsteroid*		asteroid = new Asteroid;
	IAsteroid*		comet = new Comet;

	mb.equip(laser1);
	mb.mine(asteroid);
	std::cout << '\n';

	mb.equip(laser2);
	mb.mine(comet);
	std::cout << '\n';

	mb.equip(laser3);
	mb.mine(asteroid);
	std::cout << '\n';

	mb.equip(laser4);
	mb.mine(comet);
	std::cout << '\n';

	mb.equip(laser5);
	mb.mine(asteroid);
	std::cout << '\n';

	delete laser1;
	delete laser2;
	delete laser3;
	delete laser4;
	delete asteroid;
	delete comet;
	return (0);
}